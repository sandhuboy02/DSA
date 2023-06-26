#include <iostream>
using namespace std;

class A {
    private:
        int a;
        int b;
    public:
        A(int x, int y) {
            a = x;
            b = y;
        }
        friend int sum(A);
};

int sum(A obj) {
    return obj.a + obj.b;
}

int main() {
    A o1(10, 20);
    cout << sum(o1) << endl;
    return 0;
}