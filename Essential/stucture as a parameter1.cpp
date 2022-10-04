#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
// int area(struct rectangle r1)
// {
//     r1.length++;
//     return r1.length*r1.breadth; 
//     cout<<r1.length<<endl;
// }
void area(struct rectangle r1)
{
    r1.length++; 
    r1.breadth++;  
    char ch = 253;
   printf("Used Length: %d Used Breadth: %d\n",r1.length,r1.breadth);
   cout<<"Area: "<<r1.length*r1.breadth<<"cm"<<ch;
}
int main()
{
    struct rectangle r ={10,5};
    char ch =253;
    printf("Original Length: %d Original Breadth: %d\n",r.length,r.breadth);
    //cout<<"Area: "<<area(r)<<"cm"<<ch;
    area(r);
    return 0;
}