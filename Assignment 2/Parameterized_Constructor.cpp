#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    // Parameterized constructor
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to calculate and display area
    void displayArea() {
        float area = length * breadth;

        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rectangle(10, 5);

    rectangle.displayArea();

    return 0;
}