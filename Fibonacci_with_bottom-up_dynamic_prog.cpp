#include <iostream>

using namespace std;

int Fibonaccci(int num)
{
    int memo1{1}, memo2{1};
    
    for(int i = 2; i <= num; ++i)
    {
        int memo_current = memo2 + memo1;
        memo2 = memo1;
        memo1 = memo_current;
    }
    
    return memo1;
}

int main()
{
    int num = 9;
    
    //cout << "Enter a number to find fibonaccci." << endl;
    //cin >> num;
    
    cout << "Fibonaccci is : " << Fibonaccci(num) << endl;

    return 0;
}
