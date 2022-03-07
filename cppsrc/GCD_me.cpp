#include<iostream>
using namespace std;

void  getMaxMin(int &a, int &b) {
    if(b > a) {
        a = a+b;
        b = a - b;
        a = a - b;
    }
}

int gcd(int a, int b) {
    getMaxMin(a, b);


int main() {
    int x , y;

    cout << "Enter two integers: ";
    cin >> x >> y;
    

