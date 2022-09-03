#include<iostream>
using namespace std;
int main()
{
    char ch = 'R';
    char &rh = ch;
    cout<<ch<<endl;
    rh-=9;
    cout<<rh<<endl;
    rh+=16;
    cout<<ch<<endl;
    rh-=24;
    cout<<rh;
    return 0;
}
