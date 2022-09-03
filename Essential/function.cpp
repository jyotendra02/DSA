#include<iostream>
using namespace std;
int add(int a , int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int x,y,z;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    z = add(x,y);
    cout<<"Summation of The given number is: "<<z;
    return 0;
}
