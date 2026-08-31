#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float cgpa;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0.0;
    }

    // Constructor with name and roll number
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cgpa = 0.0;
    }

    // Constructor with name, roll number and CGPA
    Student(string n, int r, float c) {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    // Display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {

    // Object using default constructor
    Student student1;

    // Object using name and roll number constructor
    Student student2("Rishi", 101);

    // Object using name, roll number and CGPA constructor
    Student student3("Rahul", 102, 8.7);

    cout << "Student 1 (Default Constructor)" << endl;
    student1.displayDetails();

    cout << endl;

    cout << "Student 2 (Name and Roll No Constructor)" << endl;
    student2.displayDetails();

    cout << endl;

    cout << "Student 3 (Name, Roll No and CGPA Constructor)" << endl;
    student3.displayDetails();

    return 0;
}