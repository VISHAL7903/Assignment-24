//9-function overloding to find a maximum of two numbers and both the numbers can be intiger or real.

#include <iostream>
int maxNumber(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
float maxNumber(float num1, float num2)
{
    return num1 > num2 ? num1 : num2;
}
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter two int type number: ";
    cin >> num1 >> num2;
    cout << "Max number is: " << maxNumber(num1, num2) << endl; 
    cout << "Enter two float type number: ";
    cin >> num1 >> num2;
    cout << "Max number is: " << maxNumber(num1, num2) << endl;
    return 0;
}