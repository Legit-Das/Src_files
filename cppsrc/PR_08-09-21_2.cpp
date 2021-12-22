#include<iostream>
using namespace std;

class B; //Forward declaration

class A {
    int x;
    public:
        A(int m) {
            x = m;
        }

        void max(B);
};

class B {
    int y;
    public:
        B(int n) {
            y = n;
        }

        friend void A::max(B);
};

void A::max(B b) {
    if(x > b.y)
        cout << "\nMax = " << x;
    else
        cout << "\nMax = " << b.y;
}

int main() {
    A p(10);
    B q(20);
    
    p.max(q);

    cout<<endl;
    return 0;
}
