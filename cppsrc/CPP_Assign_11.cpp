#include<iostream>
using namespace std;
const double PI =3.1415;

class Circle;

class Rectangle
{
    private:
        float len, brd;

    public:
        Rectangle() : len(0.0), brd(0.0)
        {}

        Rectangle(float l, float b) : len(l), brd(b)
        {}

        double area()
        {
            return len * brd;
        }

        friend void max_area(Rectangle, Circle);
};

class Circle
{
    private:
        float dia;

    public:
        Circle() : dia(0.0)
        {}

        Circle(float d) : dia(d)
        {}

        double area()
        {
            return (PI * dia * dia)/4;
        }

        friend void max_area(Rectangle, Circle);
};

void max_area(Rectangle r, Circle c)
{
    if(r.area() == c.area())
        cout << "\nThe areas of the rectangle and the circle are the same"<<endl;
    else if(r.area() > c.area())
        cout<< "\nThe area of the rectangle is greater"<<endl;
    else
        cout << "\nThe area of the circle is greater"<<endl;
}

int main()
{
    Rectangle r(4.0,5.0);
    Circle c(5.5);

    max_area(r, c);

    return 0;
}
