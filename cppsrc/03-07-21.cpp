#include<iostream>
using namespace std;

class Distance
{
    private:
        int meters;
        int kms;
        friend float convert_meters(Distance& d);
    public:
        void getdata()
        {
            cout<<"\nEnter meters and kilometers: ";
            cin>>meters>>kms;
        }
};

float convert_meters(Distance &d)
{
    return (d.kms*1000 + d.meters);
}

int main()
{
    Distance d1;
    d1.getdata();
    int m = convert_meters(d1);
    cout<<"\nTotal distance in meters: "<<m<<endl;
    return 0;
}
