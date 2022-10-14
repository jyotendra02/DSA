//Sum of n natural numbers using  recursion
#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}
int main()
{
    int x = 0; 
    printf("%d ",fun(x));
    return 0;
}