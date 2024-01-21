#include<iostream>
using namespace std;
float area (int r)
{
    return 3.14*r*r;
}
int area (int x, int y)
{
    return x*y;
}
float area (float b, float h)
{
    return (0.5*b*h);
}
int main()
{
    int x, y, r;
    float b, h;

    cout<<"Enter length and breadth of rectagle ";
    cin>>x>>y;

    cout<<"Enter radius of Circle ";
    cin>>r;

    cout<<"Enter the base and height of triangle ";
    cin>>b>>h;

    cout<<"\n Area of rectangle is "<<area(x,y);
    cout<<"\n Area of Circle is "<<area(r);
    cout<<"\n Area of rectangle is "<<area(b,h);
    return 0; 
}