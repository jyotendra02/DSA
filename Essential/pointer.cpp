//why pointer is taking more space in different system whereas integer in both system is taking same space
#include<iostream>
using namespace std;
int main()
{
    int a = 18,*p;
    p = &a;
    printf("%d %d %d ",a,p,*p);
    printf("%d",sizeof(*p));
    return 0;
}