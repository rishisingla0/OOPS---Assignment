#include <iostream>
using namespace std;

class Area {
public:
    void calculate(int side) {
        cout << "Area of Square: " << side * side << endl;
    }

    void calculate(int length, int breadth) {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }

    void calculate(double radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Area a;

    a.calculate(5);
    a.calculate(10, 5);
    a.calculate(3.5);

    return 0;
}