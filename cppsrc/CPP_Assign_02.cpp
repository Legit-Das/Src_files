//Showcases the differences between class and instance variables
#include<iostream>
using namespace std;

class Budget
{
    private:
        float cost; // instance/non-static variable
        static float total; // class/static variable

    public:
        Budget()
        {
            cost = 0.0;
        }

        void set_cost(float);
        void set_total();
        float get_cost();
        float get_total();
};

float Budget::total; //definition of class variable

void Budget::set_cost(float c)
{
    cost = c;
}

void Budget::set_total()
{
    total = total + cost;
}

float Budget::get_cost()
{
    return cost;
}

float Budget::get_total()
{
    return total;
}

int main()
{
    Budget bag;
    bag.set_cost(244.5);
    bag.set_total();
    cout<<"\nCost of bag: "<<bag.get_cost();
    cout<<"\nTotal budget so far: "<<bag.get_total()<<endl;

    Budget shoe;
    shoe.set_cost(200.0);
    shoe.set_total();
    cout<<"\nCost of shoe: "<<shoe.get_cost();
    cout<<"\nTotal budget so far: "<<shoe.get_total()<<endl;

    Budget book;
    book.set_cost(366.9);
    book.set_total();
    cout<<"\nCost of book: "<<book.get_cost();
    cout<<"\nTotal budget so far: "<<book.get_total()<<endl;

    return 0;
}
