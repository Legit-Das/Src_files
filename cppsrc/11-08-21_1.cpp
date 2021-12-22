#include<iostream>
using namespace std;

template <class T1, class T2>

class ABC
{
    private:
        T1 x;
        T2 y;

    public:
        ABC(T1 m, T2 n)
        {
            x = m;
            y = n;
        }

        void display()
        {
            cout<<"\n x = "<<x;
            cout<<"\n y = "<<y;
        }
};

int main()
{
    ABC <int, int> obj1(5,7);
    ABC <int, float> obj2(5,7.5);
    ABC <float, float> obj3(5.5,7.5);
    ABC <char, char> obj4('a','b');
    
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}
