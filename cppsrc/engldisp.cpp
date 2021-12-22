#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void input(Distance&);
void display(Distance);

int main()
{
    Distance d1,d2;
    
    input(d1);
    input(d2);
    
    cout<<"\nd1 = ";
    display(d1);
    cout<<"\nd2 = ";
    display(d2);
    cout<<endl;
    return 0;
}

void display(Distance da)
{
    cout<<da.feet<<"\'-"<<da.inches<<"\"";
}

void input(Distance& db)
{
    cout<<"\nEnter feet: ";
    cin>>db.feet;
    cout<<"Enter inches: ";
    cin>>db.inches;
}