//why free(p) is not deallocating memory from 2nd index

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int*p;
    p = (int*)malloc(5*sizeof(int));
   // p = new int[3]; !! Not Working 
    p[0]=1;
    p[1]=2;
    p[2]=3;
   cout<<p[0]<<endl; 
   cout<<p[1]<<endl; 
   cout<<p[2]<<endl; 
   __mingw_free(p);
   p[0]=3;
   __mingw_free(p);
   cout<<p[0]<<endl;
   cout<<p[1]<<endl; 
   cout<<p[2]<<endl;  
     
    return 0;
}