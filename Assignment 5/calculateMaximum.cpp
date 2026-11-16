#include <iostream>
using namespace std;

class Maximum {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    int findMax(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c ? b : c);
    }

    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum m;

    cout << "Maximum of two integers: " << m.findMax(10, 20) << endl;
    cout << "Maximum of three integers: " << m.findMax(10, 30, 20) << endl;
    cout << "Maximum of two decimal numbers: " << m.findMax(12.5, 15.5) << endl;

    return 0;
}