#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Private data members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // Private member function
    void updateDetails() {
        cout << "\nEnter Updated Name: ";
        cin >> name;

        cout << "Enter Updated Roll No: ";
        cin >> rollNo;

        cout << "Enter Updated Degree: ";
        cin >> degree;

        cout << "Enter Updated Hostel: ";
        cin >> hostel;
    }

public:
    // Public member function
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    // Public member function
    void updateCGPA() {
        cout << "Enter Updated CGPA: ";
        cin >> currentCGPA;
    }

    // Public member function
    void updateHostel() {
        cout << "Enter Updated Hostel: ";
        cin >> hostel;
    }

    // Public function calling private function
    void updateStudentDetails() {
        updateDetails();
    }

    // Public member function
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student student;

    student.addDetails();

    cout << "\nOriginal Details:";
    student.displayDetails();

    student.updateStudentDetails();
    student.updateCGPA();
    student.updateHostel();

    cout << "\nUpdated Details:";
    student.displayDetails();

    return 0;
}