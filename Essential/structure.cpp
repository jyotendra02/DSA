#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}r1; //Global Declaration Of Variable

int main()
{
   //struct Rectangle r1;
    r1.length =10;
    r1.breadth =5;
    printf("area of Rectangle is: %d",r1.length*r1.breadth);
    return 0;
}
