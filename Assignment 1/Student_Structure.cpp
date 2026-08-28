#include <iostream>
#include <string>
using namespace std;

struct Student {
    // Data members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // Member functions
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

    void updateCGPA() {
        cout << "Enter Updated CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Enter Updated Hostel: ";
        cin >> hostel;
    }

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

    // Add student details
    student.addDetails();

    // Display details
    student.displayDetails();

    // Update CGPA
    student.updateCGPA();

    // Update hostel
    student.updateHostel();

    // Display updated details
    student.displayDetails();

    return 0;
}