#include <iostream>
#include <cstring>

using namespace std;

int Factorial(int num, int *memo)
{
    if(memo[num] == -1)
    {
        if(num <= 1)
        {
            memo[num] = 1;
        }
        else
        {
            memo[num] = num * Factorial(num - 1, memo);
        }
    }
    
    return memo[num];
}

int main()
{
    int num = 5;
    
    //cout << "Enter a number to find Factorial." << endl;
    //cin >> num;
    
    int *memo = new int[num+1];
    
    for(int i = 0; i <= num; ++i)
        memo[i] = -1;
    
    cout << "Factorial is : " << Factorial(num, memo) << endl;
    
    delete [] memo;

    return 0;
}
