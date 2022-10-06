#include<iostream>
using namespace std;

//int x = 0;  We can also use global variable instead of static variable.
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;

}
int main()
{
    int a=5;
    printf("%d\n",fun(a));
    printf("%d",fun(a));
    return 0;
}