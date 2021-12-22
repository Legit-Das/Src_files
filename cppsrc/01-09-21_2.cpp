#include<iostream>
using namespace std;

void divide(int x, int y)
{
    if(y == 0)
    {
        throw("Divide by zero exception");
    }
    else
    {
        float r = (float)x/y;
        cout<<"\nResult = "<<r<<endl;
    }
}

int main()
{
    int a, b;

    cout<<"\nEnter value in a: ";cin>>a;
    cout<<"\nEnter value in b: ";cin>>b;

    try
    {
        divide(a,b);
    }
    catch(char const *s)
    {
        cout<<"\n"<<s<<endl;
    }
    cout<<"\nEnd of program";
    return 0;
}

