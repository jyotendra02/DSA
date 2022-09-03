#include<iostream>
using namespace std;
struct triangle
{
    int base;
    int height;
};

int main()
{
    struct triangle *p;
    p = (struct triangle*)malloc(sizeof(struct triangle));
    p->base =18;
    p->height = 19;
    cout<<"Base: "<<p->base<<" Height: "<<p->height<<endl;
    p->height = 24;
    p->base = 28;
    cout<<"Base: "<<p->base<<" Height: "<<p->height<<endl;
    return 0;
}