#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called." << endl;
    }

    ~Demo() {
        cout << "Destructor called." << endl;
    }
};

void createObject() {
    cout << "\nInside createObject():" << endl;

    Demo obj3;

    cout << "Object created inside function." << endl;
}

int main() {

    cout << "Inside main():" << endl;

    Demo obj1;
    Demo obj2;

    cout << "Objects created inside main()." << endl;

    createObject();

    cout << "\nBack inside main()." << endl;

    return 0;
}