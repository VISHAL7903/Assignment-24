#include<iostream>
using namespace std;
int add(int num1, int num2)
{
    return num1+num2;
}
float add(float num1, float num2)
{
    return num1+num2;
}
double add(double num1,double num2)
{
    return num1+num2;
}
int main()
{
    double num1, num2;
    cout<<"Enter two int type number ";
    cin>>num1>>num2;
    cout<<"Sum is "<<add(num1, num2) <<endl;

    cout<<"Enter two float type number";
    cin>>num1>>num2;
    cout<<"Sum is "<<add(num1,num2) <<endl;

    cout<<"Enter double type number "; 
    cin>>num1>>num2;
    cout<<"Sum is "<<add(num1, num2) <<endl;
    return 0;
}