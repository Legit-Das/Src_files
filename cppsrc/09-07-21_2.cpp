#include<iostream>
using namespace std;

class Matrix
{
    private:
        int arr[3][3];
    public:
        Matrix()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    arr[i][j] = 0;
                }
            }
        }

        void getdata()
        {
            cout<<"\nEnter the values into the 3x3 Matrix: ";
            
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cin>>arr[i][j];
                }
            }
        }

        void showdata()
        {

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout<<arr[i][j]<<'\t';
                }
                cout<<endl;
            }
        }

        Matrix operator + (Matrix &m)
        {
            Matrix t;

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    t.arr[i][j] = arr[i][j] + m.arr[i][j];
                }
            }

            return t;
        }
};

int main()
{
    Matrix m1,m2,m3;

    m1.getdata();

    m2.getdata();

    m3 = m1 + m2;

    m3.showdata();

    return 0;
}
