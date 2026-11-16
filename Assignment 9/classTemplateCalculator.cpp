#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void addition() {
        cout << "Addition = " << a + b << endl;
    }

    void subtraction() {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiplication() {
        cout << "Multiplication = " << a * b << endl;
    }

    void division() {
        if (b == 0) {
            cout << "Division by zero is not possible." << endl;
        } else {
            cout << "Division = " << a / b << endl;
        }
    }
};

int main() {
    Calculator<int> c1(20, 10);

    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();

    return 0;
}