//partaray.cpp
//structure variables as array elements
#include<iostream>
using namespace std;

const int SIZE = 4;

struct part
{
    int modelnumber;
    int partnumber;
    float cost;
};

int main()
{
    int n;
    part apart[SIZE]; //array of structures
    for(n=0; n<SIZE; n++)
    {
        cout<<endl;
        cout<<"Enter a model number: ";
        cin>>apart[n].modelnumber;
        cout<<"Enter part number: ";
        cin>>apart[n].partnumber;
        cout<<"Enter cost: ";
        cin>>apart[n].cost;
    }
    cout<<endl;
    for(n=0; n<SIZE; n++)
    {
        cout<<"Model "<<apart[n].modelnumber;
        cout<<" Part "<<apart[n].partnumber;
        cout<<" Cost "<<apart[n].cost<<endl;
    }

    return 0;
}