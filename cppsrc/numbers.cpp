#include<iostream>
using namespace std;

class numbers
{
    private:
        int x;
    public:
        numbers(numbers &n):x(n.x)
        {}

        numbers(int i):x(i)
        {}

        void display()
        {
            cout<<x<<endl;
        }
};

int main()
{
    numbers n1(20);
    numbers n2(n1);
    n1.display();
    n2.display();
    numbers n3 = n1;
    n3.display();
    return 0;
}
