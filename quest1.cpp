//Define a function to check whether a given number is a Prime number or not.

#include <iostream>
int prime(int x);
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    if (prime(n))
             cout<< n << " is a prime number\n";
    else
             cout<< n << " is not a prime number\n";
    return 0;
}
int prime(int x)
{
    int i;
    if(x<=1)
    return 0;
    for (i = 2; i < x; i++)
    {
        if (x % 2 == 0)
            return 0;
    }
    return 1;
}