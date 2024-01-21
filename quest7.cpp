#include<iostream>
using namespace std;
int addNumbers(int a, int b, int c=0)
{
    return a + b + c;
}
int main()
{
int result1 = addNumbers(5,10);
int result2 = addNumbers(5,10,100);


cout<<"Result 1 "<<result1<<endl;
cout<<"Result 2 "<<result2<<endl;
return 0;
}


