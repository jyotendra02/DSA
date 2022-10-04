#include<iostream>
using namespace std;

void fun(int x[],int n)
{
    int i;
    for (i = 0 ; i<n;i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int a[5];
    cout<<"Enter Elements of Array:\n";
    for(int i = 0;i<5;i++)
    {
        cin>>a[i];
    }
    fun(a,5);
    return 0;
}