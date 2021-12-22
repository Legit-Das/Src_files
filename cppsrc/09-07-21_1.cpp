#include<iostream>
using namespace std;

class Distance
{
    private:
        int km;
        int m;
    public:
        Distance()
        {
            km = 0;
            m = 0;
        }

        void getdata()
        {
            cout<<"\nEnter kilometer and meter: ";
            cin>>km>>m;
        }

        void display()
        {
            cout<<"\nKilometer = "<<km;
            cout<<"\nmeter= "<<m;
        }

        Distance operator + (Distance &d2)
        {
            Distance d3;
            d3.m = m + d2.m;
            if(d3.m >= 1000)
            {
                d3.km = 1;
                d3.m = d3.m -1000;
            }
            d3.km = d3.km + km + d2.km;
            return d3;
        }
        Distance operator - (Distance &d2)
        {
            Distance d3;
            d3.m = m - d2.m;

            d3.km = km - d2.km;
            if(d3.m < 0)
            {
                d3.m = d3.m + 1000;
                d3.km = d3.km - 1;
            }

            return d3;
        }
};

int main()
{
    Distance d1,d2,d3;

    cout<<"\nEnter the first distance: ";
    d1.getdata();
    cout<<"\nEnter the second distance: ";
    d2.getdata();

    d3 = d1 + d2;

    d3.display();
    
    Distance d4;
    d4 = d1 - d2;
    d4.display();


    return 0;
}
