#include<iostream>
using namespace std;

double simIntr(double, float, float = 10.0F);

int main()
{
    double p;
    float t;
    int i,j=1;


    do
    {
        cout << "\nIs the customer a senior citizen?(0=No, 1=yes): ";
        cin>>i;
        switch(i)
        {
        case 0:
            cout<<"\nEnter principle amount: ";
            cin>>p;
            cout<<"\nEnter time in months: ";
            cin>>t;
            p += simIntr(p,t/12.0F);
            cout<<"\nCustomer balance: "<<p<<endl;
            break;
        case 1:
            cout<<"\nEnter principle amount: ";
            cin>>p;
            cout<<"\nEnter time in months: ";
            cin>>t;
            p += simIntr(p,t/12.0F,12.0F);
            cout<<"\nCustomer balance: "<<p<<endl;
            break;
        default:
            cout<<"\nPlease decide whether your customer is senoir cirizen of not properly";

        }
        cout<<"\nDo another?(0=No, Anything else= yes): ";
        cin>>j;
    } while(j!=0);

    return 0;
}

double simIntr(double principle, float time, float rate)
{
    return (principle*time*rate)/100.0;
}