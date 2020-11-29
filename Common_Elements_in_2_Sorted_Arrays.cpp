#include <iostream>
#include <cstring>

using namespace std;

int CommonElementsInSortedArrays(int arr1[], int arr2[], int len1, int len2)
{
    int i = 0, j = 0, count = 0;
    while(i < len1 || j < len2)
    {
        if(arr1[i] == arr2[j])
        {
            ++count;
            ++i;
            ++j;
        }
        else
        {
            if(arr1[i] < arr2[j])
                i++;
            else
                j++;
        }
    }
    
    return count;
}

int main()
{
    int arr1[] = {13, 27, 35, 40, 49, 55, 60};
    int arr2[] = {17, 35, 39, 40, 55, 58, 60};
    
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int no_of_common_elements = CommonElementsInSortedArrays(arr1, arr2, len1, len2);
    
    cout << "Number of common elements are, " << no_of_common_elements << endl;
    
    return 0;
}
