//ptrvoid.cpp
//pointers to type void
#include<iostream>
using namespace std;

int main()
{
    int intvar = 10;
    float flovar = 99.99;

    int* ptrint;
    float* ptrflo;
    void* ptrvoid;

    ptrint = &intvar;
    cout << *ptrint << endl;
    ptrflo = &flovar;
    cout << *ptrflo << endl;
    ptrvoid = &intvar;
    cout<< *(int*)ptrvoid << endl;
    ptrvoid = &flovar;
    cout<< *(float*)ptrvoid << endl; //we cannot print void* type pointer with simple dereference/indirection, casting to another pointer type in needed
    return 0;
}
