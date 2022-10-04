#include<iostream>
using namespace std;

int *fun(int n)
{
   int *p;
   p = (int*)malloc(n*sizeof(int));    
   return p; 

}
void func(int x[],int n)
{
    int i;
    for (i = 0 ; i<n;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int *a;
    a = fun(5);
    a[0]=18;
    a[1]=18;
    a[2]=18;
    a[3]=18;
    a[4]=18;
    a[5]=18;
    a[6]=10;
    func(a,6);
    return 0;
}