//passref.cpp
//arguments passed by reference
#include<iostream>
using namespace std;

int main()
{
    void centimize(double& );   //prototype

    double var =10.0;
    cout << "var = " << var << " inches" << endl;

    centimize(var);
    cout << "var = " <<var << " centimeters" << endl;
    return 0;
}
//----------------------------------------
void centimize(double& v)
{
    v *= 2.54;
}
