//virtbase.cpp
//virtual base classes
#include<iostream>
using namespace std;

class Parent {
    protected:
        int basedata;
};

class Child1 : virtual public Parent {
};

class Child2 : virtual public Parent {
};

class Grandchild : public Child1, public Child2 {
    public:
        int getdata() {
            return basedata; //OK: only one copy of the Parent
        }
};

int main() {
    Grandchild gc;
    gc.getdata();
    return 0;
}
