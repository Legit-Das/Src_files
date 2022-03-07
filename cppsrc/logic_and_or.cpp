#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 1;

    a = a || --b;

    cout << a << " " << b << endl;

    int c = --a && --b;
    cout << a << " " << b << " " <<  c << endl;
    return 0;
} 
