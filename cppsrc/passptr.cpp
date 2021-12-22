//passptr.cpp
//arguments passed by pointer
#include<iostream>
using namespace std;

int main()
{
    void centimize(double* );   //prototype

    double var = 10.0;
    cout <<"var = "<< var <<" inche"<<endl;

    centimize(&var);
    cout <<"var = "<< var <<" centimeters"<<endl;
    return 0;
}
//-----------------------------------------------------
void centimize(double* ptrvar)
{
    *ptrvar *= 2.54;
}
