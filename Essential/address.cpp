#include<iostream>
using namespace std;
struct rectangle
    {
        int length;
        int breadth;
    };
void changelength(struct rectangle *p,int l)
 {
  
 }
int main()
{
    struct rectangle r ={10,5};
    changelength(&r,15);
    cout<<&r<<endl<<&r.length<<endl<<&r.breadth;
    cout<<"\n"<<sizeof(r);
    return 0;
}