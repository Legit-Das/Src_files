#include<iostream>
using namespace std;

class Item
{
    private:
        int x;
    public:



        Item()  //Default constructor and Do-nothing constructor
        {}



        Item(int val)   //Parameterized constructor
        {
            x = val;
        }



        Item operator ++()
        {
            Item a;

            a.x = ++x;
            return a;
        }


        
        void display()
        {
            cout<<x;
        }
};

int main()
{
    int i;
    cout<<"\nEnter an integer: "; cin>>i;

    Item p(i), q;

    q = ++p;
    
    p.display();
    cout<<endl;
    q.display();

    return 0;
}
