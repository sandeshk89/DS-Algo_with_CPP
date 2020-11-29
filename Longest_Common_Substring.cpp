#include <iostream>
#include <cstring>

using namespace std;

int LongestCommonSubstring(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int grid[len1+1][len2+1];
    int count = 0;

    for (int i = 0; i <= len1; ++i)
    {
        for (int j = 0; j <= len2; ++j)
        {
            if (i == 0 || j == 0)
            {
                grid[i][j] = 0;
            }
            else if (str1[i - 1] == str2[j - 1])
            {
                grid[i][j] = grid[i - 1][j - 1] + 1;
                count = max(grid[i][j], count);
            }
            else
            {
                grid[i][j] = 0;
            }
        }
    }

    return count;
}

int max(int row, int col)
{
    row > col ? row : col;
}

int main()
{
    char *str1 = "abcdfe";
    char *str2 = "acde";

    int substring_len = LongestCommonSubstring(str1, str2);

    cout << "Length of longest common substring = " << substring_len << endl;

    return 0;
}
