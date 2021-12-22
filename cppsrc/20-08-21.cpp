#include<iostream>
using namespace std;

const int SIZE = 3;

template <class T>

class Vector
{
    private:
        T* v;
    public:
        Vector()
        {
            v = new T[SIZE];
            for (int i =0; i<SIZE; i++)
            {
                v[i] = 0;
            }
        }

        Vector(T* a)
        {
            v = new T[SIZE]; //was missing
            for(int i =0; i<SIZE; i++)
            {
                v[i] = a[i];
            }
        }
        
        T operator* (Vector &k)
        {
            T sum =0;
            for(int i =0; i<SIZE; i++)
            {
                sum += this -> v[i] * k.v[i];
            }

            return sum;
        }

        void display()
        {
            for(int i =0; i<SIZE; i++)
            {
                cout<<'\t'<<v[i];
            }
            cout<<endl;
        }
};

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    Vector <int> v1;
    Vector <int> v2;

    v1 = x;
    v2 = y;

    cout<<"v1 = ";
    v1.display();

    cout<<"v2 = ";
    v2.display();
    
    cout<<"v1 * v2 ="<<v1 * v2;
    cout<<endl;

    return 0;
}
