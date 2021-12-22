#include<iostream>
using namespace std;
class Distance2;//Forward declaration
class Distance1
{
    private:
        int meters;
        int kms;
        friend void convert_meters(Distance1 &d1, Distance2 &d2);
    public:
        void getdata()
        {
            cout<<"\nEnter meters and kilometers: ";
            cin>>meters>>kms;
        }
};

class Distance2
{
    private:
        int meters;
        int kms;
        friend void convert_meters(Distance1 &d1, Distance2 &d2);
    public:
        void getdata()
        {
            cout<<"\nEnter meters and kilometers: ";
            cin>>meters>>kms;
        }
};

void convert_meters(Distance1 &d1, Distance2 &d2)
{
    if((d1.kms*1000 + d1.meters)>(d2.kms*1000 + d2.meters))
        cout<<"\nFirst distance is larger Larger";
    else
        cout<<"\nSecond distance is larger";
    cout<<endl;

}

int main()
{
    Distance1 d1;
    d1.getdata();

    Distance2 d2;
    d2.getdata();

    convert_meters(d1,d2);

    return 0;
}
