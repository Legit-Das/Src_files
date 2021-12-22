#include<iostream>
using namespace std;

class B; //Forward declaration

class A {
    int x;
    public:
        A(int m) {
            x = m;
        }

        friend void max(A, B); //Would give error w/o forward declaration
};

class B {
    int y;
    public:
        B(int n) {
            y = n;
        }

        friend void max(A, B);
};

void max(A a, B b) {
    if(a.x > b.y)
        cout << "\nMax  = " << a.x;
    else
        cout << "\nMax  = " << b.y;
}

int main() {
    A p(10);
    B q(20);
    
    max(p,q);
    cout<<endl;
    return 0;
}
