#include <iostream>
using namespace std;

int isFibonacci(int num)    
{
    int a = 0, b = 1, j=1;

    if (num == a || num == b) 
    {
        return 1;  // num is one of the first two Fibonacci numbers
    }

    while (j <= num) 
    {
        j = a + b;
        if (j == num) 
        {
            return 1;  // num is a Fibonacci number
        }
        a = b;
        b = j;
    }

    return 0; // num is not a Fibonacci number
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isFibonacci(n)) 
    {
        cout << n << " is a Fibonacci number." << endl;
    } 
    else 
    {
        cout << n << " is not a Fibonacci number." << endl;
    }

    return 0;
}
