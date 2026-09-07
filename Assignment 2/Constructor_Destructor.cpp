#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called." << endl;
    }
};

int main() {

    cout << "Creating objects..." << endl;

    Demo obj1;
    Demo obj2;
    Demo obj3;

    cout << "All objects created." << endl;

    return 0;
}