#include<iostream>
using namespace std;

int main()
{
    int x;

    cout<<"\nEnter a positive number: ";
    cin>>x;

    try
    {
        if(x == 0)
        {
            throw("Zero");
        }
        else if(x < 0)
        {
            throw(x);
        }
        else
        {
            cout<<"\nx = "<<x<<endl;
        }
    }
    catch(int x)
    {
        cout<<x<<" is negative"<<endl;
    }
    catch(char const *s)
    {
        cout<<x<<" is "<<s<<endl;
    }
    cout<<"\nEnd of program\n";

    return 0;
}
