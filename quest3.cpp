//3. Define a function to calculate x raised to the power y.


#include<iostream>
using namespace std;
int pow(int x,int y)
{
    int a=1;
    for (int i = 0; i < y; i++)
    {
        a=a*x;
    }
    return a;
} 
int main()
{
    int x,y;
    cout<<"Enter 2 number"<<endl;
    cin >> x>> y;
    cout << x << " Power " << y << " is " <<pow (x,y);
    return 0; 
}