#include<iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "\nEnter two negative integers: ";
    cin >> x >> y;

    try
    {
        if( x == 0 || y == 0)
            throw('0');
        if((x > 0 && y < 0) || (x < 0 && y > 0))
            throw(x);
        if(x > 0 && y >>0)
            throw("Are you even listening?");
    }
    catch(char)
    {
        cout<<"\nZero is not negative";
    }
    catch(int x)
    {
        cout<<"\nYou entered a positive number";
    }
    catch(char const *s)
    {
        cout<<"\n"<<s;
    }
    cout<<endl;
    return 0;
}
