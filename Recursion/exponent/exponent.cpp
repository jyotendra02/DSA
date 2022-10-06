#include<iostream>
using namespace std;

int expo(int m ,int n)
{
    if(n==0)
      return 1;
    return expo(m,n-1)*m;  
}

int main()
{
    cout<<expo(2,5);
    return 0;
}