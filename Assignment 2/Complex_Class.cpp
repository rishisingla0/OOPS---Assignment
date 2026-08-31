#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    // Display complex number
    void display() {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";

        cout << endl;
    }
};

int main() {

    // Object using default constructor
    Complex c1;

    // Object using parameterized constructor
    Complex c2(5, 3);

    cout << "Complex Number 1 (Default Constructor): ";
    c1.display();

    cout << "Complex Number 2 (Parameterized Constructor): ";
    c2.display();

    return 0;
}