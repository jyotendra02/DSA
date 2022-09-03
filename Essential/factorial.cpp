#include<iostream>
using namespace std;

class fact
{
    int n,factorial=1;
    public:
    int getinput()
    {
        cout<<"Enter a Positive Number: ";
        cin>>n;
        return n;
    }
    void cal(int x)
    {
        for(int i = 1;i<=x;i++)
        {
            factorial *=i;
        }
        cout<<"Factorial of "<<n<<" is "<<factorial<<"."<<endl;
    }
};

int main()
{
    int num;
    fact n1;

    n1.cal(n1.getinput());

    return 0;
}