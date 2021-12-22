#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[10][10];
    int r,c;

public:
    Matrix()
    {
        for (int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    Matrix(int x, int y)
    {
        r = x;
        c = y;
        cout << "\nEnter "<<r*c<<" Elements: "<<endl;
        for (int i = 0; i < r; i++)
        {
            for(int j = 0; j< c;j++)
            {
                cin >>a[i][j];
            }
        }
    }
    void display()
    {
        cout<<"\n\n";
        for (int i = 0; i < r; i++)
        {
            for(int j = 0; j< c;j++)
            {
                cout<<a[i][j]<<'\t';
            }
            cout<<endl;
        }
    }

    friend Matrix operator -(Matrix , Matrix );

};

Matrix operator -(Matrix a1, Matrix a2)
{
    Matrix t;
    t.r = a1.r;
    t.c = a1.c;
    for(int i = 0; i < t.r; i++)
    {
        for(int j=0; j< t.c; j++)
        {
            t.a[i][j] = a1.a[i][j] - a2.a[i][j];
        }
    }
    return t;
}
int main()
{
    int r, c;
    cout<<"Enter number of rows and colums: ";
    cin>>r>>c;
    Matrix a1(r,c), a2(r,c),a3;
    a3=a1-a2;
    cout<<"a3 is\n";
    a3.display();
    return 0;
}
