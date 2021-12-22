#include<iostream>
using namespace std;

class A {
    int x,y;
    public:
        A(int m, int n) {
            x = m;
            y = n;
        }

        friend int sum(A);
};

int sum(A a) {
    int s;
    s = a.x + a.y;
    return s;
}

int main() {
    A obj(3,5);
    cout<<sum(obj)<<endl;
    return 0;
}
