//ptrnote.cpp
//array accessed with pointer noatation
#include<iostream>
using namespace std;

int main()
{
    int intarray[5] = { 31, 54, 77, 62, 93};

    for(int i = 0; i<5; i++)
    {
        cout << *(intarray + i) << endl;
    }

    return 0;
}

