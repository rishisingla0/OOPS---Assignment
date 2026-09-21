#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    friend class Display;
};

class Display {
public:
    void show(Student s) {
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    Student s("Rishi", 85);

    Display d;
    d.show(s);

    return 0;
}