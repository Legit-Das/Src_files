#include<iostream>
using namespace std;

int main()
{
    int x,y;
    
    cout<<"\nEnter x: ";cin>>x;
    cout<<"\nEnter y: ";cin>>y;

    try
    {
        if(y != 0)
        {
            float r = (float)x/y;
            cout<<"\nr = "<<r<<endl;
        }
        else
        {
            throw(y);
        }
    }
    catch(int y)
    {
        cout<<"\nDivided by zero!"<<endl;
    }

    cout<<"\nEnd of program."<<endl;

    return 0;
}
