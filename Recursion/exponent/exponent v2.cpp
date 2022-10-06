//Improved Version of p
#include<iostream>
using namespace std;

int expo(int m, int n)
{
    if(n==0)
       return 1;
    if(n%2==0)
       return expo(m*m,n/2);
    else
       return m*expo(m*m,(n-1)/2);      
}
int main()
{
    cout<<expo(2,10);
    return 0;
}