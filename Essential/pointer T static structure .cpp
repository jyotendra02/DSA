#include<iostream>
using namespace std;

struct rectangle
{ 
    int length;
    int breadth;

};

int main()
{
    struct rectangle r = {18,19},*p = &r;
    cout<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    r.length = 24; 
// *p.length = 28; Not Working in latest compiler 
    cout<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    p->length = 28;
    p->breadth = 02;
    cout<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
    return 0;

}