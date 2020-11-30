#include <iostream>
#include <cstring>

using namespace std;

int Fibonaccci(int num)
{
    int memo1 = 0, memo2 = 0, memo_current = 0;
    
    for(int i = 2; i <= num; ++i)
    {
        if(i <= 2)
        {
            memo1 = 1;
            memo2 = 1;
            memo_current = 1;
        }
        else
        {
            memo_current = memo2 + memo1;
            memo2 = memo1;
            memo1 = memo_current;
        }
    }
    
    return memo_current;
}

int main()
{
    int num = 9;
    
    //cout << "Enter a number to find fibonaccci." << endl;
    //cin >> num;
    
    cout << "Fibonaccci is : " << Fibonaccci(num) << endl;

    return 0;
}
