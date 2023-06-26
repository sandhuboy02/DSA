//program to implement various constructors
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Default constructor called" << endl;
    }

    A(int x) {
        cout << "Parameterized constructor called with value " << x << endl;
    }
    A(int x, int y){
        cout<<"Parameterized constructor called with values " <<x<<"and"<<y<<endl;
    }
};

int main() {
    A a1; // Default constructor called
    A a2(10); // Parameterized constructor called with value 10
    A a3(20,30); // Parameterized constructor called with value 20 and 30
    return 0;
}

