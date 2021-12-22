#include<iostream>
using namespace std;
#include<cmath>

class Point //class Point with int data menmers
{
    public:
        int x,y; //x for abscissa, y for ordinate
};

class Triangle //class Triangle
{
    private:
        Point p1,p2,p3; //Three point objects(vertices of triangles)
        void setpoint(Point  *p, int a, int b); //sets value of points
        double side(Point p, Point q); //Calculates side length
    public:
        void setvertices(int x1, int y1, int x2, int y2, int x3, int y3); //sets values of vertices
        double perimeter(); //calculates perimeters

};
//---------------------------------------------------------------------------
//Function definitions with proper scope

void Triangle::setpoint(Point *p, int a, int b)
{
    p->x = a;
    p->y = b;
}

double Triangle::side(Point p, Point q)
{
    return sqrt(pow((p.x - q.x),2)+pow((p.y - q.y),2));
}

void Triangle::setvertices(int x1, int y1, int x2, int y2, int x3, int y3)
{
   setpoint(&p1, x1,y1);
   setpoint(&p2, x2,y2);
   setpoint(&p3, x3,y3);

}

double Triangle::perimeter()
{
    double s1,s2,s3,val;
    s1 = side(p1,p2);
    s2 = side(p2,p3);
    s3 = side(p3,p1);
    val = s1+s2+s3;
    return val;
}
//--------------------------------------------------------------------------
//main function

int main()
{
    double pr1, pr2;
    Triangle t1, t2;

    t1.setvertices(1,-2,-4,3,0,5);
    pr1 = t1.perimeter();
    cout<<"\nPerimeter of Triangle 1 = "<<pr1;

    t2.setvertices(0,0,2,3,4,5);
    pr2 = t2.perimeter();
    cout<<"\nPerimeter of Triangle 2 = "<<pr2<<endl;

    return 0;
}
