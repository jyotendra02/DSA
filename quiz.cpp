#include<iostream>
using namespace std;
int main() 
{
  for(int i=1;i<4;i++)
  {
    int a = i;
    cout<<i<<a<<endl;
  }
  
  for(int j=1;j<4;++j)
  {
    int b = j;
    cout<<j<<b<<endl;
  }  
  return 0;
}