#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Default constructor
    Student() {
        name = "Rishi";
        rollNo = 101;
    }

    // Display student details
    void displayDetails() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student student;

    student.displayDetails();

    return 0;
}