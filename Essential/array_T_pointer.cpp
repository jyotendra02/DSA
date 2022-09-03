//Note: 
// Why printing &p giving same address for different indexes
// Why Cout<<p and cout<<*p Giving Same Result
// Why p = A; is giving error 
// For Each Loop Doesn't Work For Pointers

//cout<<p; working in char type {}


#include<iostream>
using namespace std;
int main()
{
    /*char R[5] = {"Riya"};
    char *p;
    p = &R[5];
   
    for(int i = 0;i<5;i++)
    {
       cout<<p[i];     
    }
    return 0;*/
    int Riya[10] = {18,19,24,28,02,06};
    int *p;
    p = Riya;
    for (int i = 0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
    cout<<p<<" "<<Riya;
}