#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Initialize complex number
    void set(float r, float i) {
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

    // Add two complex numbers
    Complex sum(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main() {
    Complex c1, c2, c3;

    // Initialize first complex number
    c1.set(5, 3);

    // Initialize second complex number
    c2.set(2, 4);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Add two complex numbers
    c3 = c1.sum(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}