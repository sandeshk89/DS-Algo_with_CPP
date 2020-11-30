#include <iostream>
#include <cstring>

using namespace std;

bool IsPallindrome(char *str)
{
    int len = strlen(str);
    
    int char_count[256] = { 0 };
    
    for(int i = 0; i < len; ++i)
    {
        char_count[str[i]]++;
    }
    
    int odd_chars_count = 0;
    for(int i = 0; i < 256; ++i)
    {
        if(char_count[i] % 2 != 0)
            odd_chars_count++;
    }
    
    if(odd_chars_count <= 1)
        return true;
    else
        return false;
}

int main()
{
    char str[] = "dabcabcd";
    
    if (IsPallindrome(str))
        cout << "Given string is Pallindrome" << endl;
    else
        cout << "Given string is not Pallindrome" << endl;

    return 0;
}
