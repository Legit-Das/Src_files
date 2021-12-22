//ptrinc.cpp
//array accessed with pointer
#include<iostream>
using namespace std;

int main()
{
    int intarray[] = { 31, 54, 77, 52, 93};
    int* ptrint;
    ptrint = intarray; //array name is pointer constant

    for(int i=0; i<(sizeof(intarray)/sizeof(int)); i++)
    {
        cout << *(ptrint++) << endl;//increment on pointer variable
    }

    return 0;
}
