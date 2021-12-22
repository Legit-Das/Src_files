//Static member variable to keep count of objects of a class
#include<iostream>
using namespace std;

class TollBooth
{
    private:
        int car_no;
        float charge;
        static int count; //variable that keeps count

    public:
        TollBooth()     //no-arg constructor
        {
            car_no = 0;
            charge = 0.0;
            count += 1;
        }

        TollBooth(int x, float y)       //constructor with args
        {
            car_no = x;
            charge = y;
            count += 1;
        }

        int get_count()
        {
            return count;
        }
};

int TollBooth::count; //definition of count

int main()
{
    TollBooth car1;
    TollBooth car2(2, 5.6), car3(3,9.8);
    TollBooth car4(4,2.4);
    TollBooth car5(5, 9.8);
    TollBooth car6(87, 2.9), car7(88, 4.6);

    cout<<"\nTotal objects created: "<<car1.get_count()<<endl;

    return 0;
}
