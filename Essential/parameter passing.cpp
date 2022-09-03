#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 18 , b = 19;
    swap(a,b);
    printf(" a is %d b is %d.",a,b);
    return 0;
}