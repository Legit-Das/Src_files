//normbase.cpp
//ambiguous reference to the base class
#include<iostream>
using namespace std;

class Parent {
    protected:
        int basedata;
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

class Grandchild : public Child1, public Child2 {
    public:
        int getdata() {
            return basedata; //ERROR: ambiguous
        }
};

int main() {
    Grandchild gc;

    cout << gc.getdata();
    return 0;
}
