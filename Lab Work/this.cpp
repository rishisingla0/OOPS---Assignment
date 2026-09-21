#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Address of current object: " << this << endl;
    }
};

int main() {
    Student s;

    cout << "Address of object: " << &s << endl;
    s.display();

    return 0;
}