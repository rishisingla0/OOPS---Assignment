#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s("Rishi");

    Student *ptr = &s;

    ptr->display();

    return 0;
}