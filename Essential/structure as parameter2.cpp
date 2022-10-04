#include<iostream>
using namespace std;

struct rectangle
{
    int length,breadth;
};

void changeLen(struct rectangle*p,int l)
{
    p->length=l;
}

int main()
{
    struct rectangle r1 ={19,20};
    printf("Original Length: %d Original Breadth: %d\n",r1.length,r1.breadth);
    changeLen(&r1,24);
    printf("Modified Length: %d Original Breadth: %d\n",r1.length,r1.breadth);
    return 0;
}