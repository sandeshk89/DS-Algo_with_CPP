#include <iostream>
#include <cstring>

using namespace std;

int Fibonacci(int num, int *memo)
{
    if(memo[num] == -1)
    {
        if(num <= 1)
        {
            memo[num] = num;
        }
        else
        {
            memo[num] = Fibonacci(num - 1, memo) + Fibonacci(num - 2, memo);
        }
    }
    
    return memo[num];
}

int main()
{
    int num = 8;
    
    //cout << "Enter a number to find fibonaccci." << endl;
    //cin >> num;
    
    int *memo = new int[num+1];
    
    for(int i = 0; i <= num; ++i)
        memo[i] = -1;
    
    cout << "Fibonacci is : " << Fibonacci(num, memo) << endl;
    
    delete [] memo;

    return 0;
}
