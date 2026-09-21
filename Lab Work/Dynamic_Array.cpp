#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Student object" << endl;
    }
};

int main() {
    Student *s = new Student[3];

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    delete[] s;

    return 0;
}