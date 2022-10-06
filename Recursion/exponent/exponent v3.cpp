#include<iostream>
using namespace std;
int expo(int m, int n)
{
    int result=1,i;
    for(i=1;i<=n;i++)
    {
         result*=m;
    }
    return result;
}
int main()
{
    cout<<expo(2,0);
    return 0;
}