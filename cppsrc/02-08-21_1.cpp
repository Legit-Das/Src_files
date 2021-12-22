#include<iostream>
using namespace std;

class Item
{
    private:
        int x;
        int y;
    public:


        void input()
        {
            cout<<"\nEnter two integers: ";
            cin>>x>>y;
        }



        Item operator ++()
        {
            Item a;

            a.x = ++x;
            a.y = ++y;
            return a;
        }


        
        void display()
        {
            cout<<x<<' '<<y;
        }
};

int main()
{
    Item p, q;
    
    p.input();

    q = ++p;
    
    p.display();
    cout<<endl;
    q.display();

    return 0;
}
