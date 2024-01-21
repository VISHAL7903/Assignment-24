#include<iostream>
using namespace std;
int findHighestDigit(int number) 
{
    int highest = -1;

    while (number > 0)  
    {
        int digit = number % 10;
        if (digit > highest) 
        {
            highest = digit;
        }
        number /= 10;
    }

    return highest;
}

int main()
{
    int x;
    cout<<"Enter tha digit";
    cin >> x;
    int result = findHighestDigit(x);
    cout << "The highest value digit in " << x << " is = " << result ;
    cout << endl;

    return 0;
}

