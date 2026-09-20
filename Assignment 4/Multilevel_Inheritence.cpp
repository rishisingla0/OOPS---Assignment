#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName() {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Employee : public Person {
protected:
    int employeeId;

public:
    void setEmployeeId() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setDepartment() {
        cout << "Enter Department: ";
        cin >> department;
    }

    void display() {
        cout << "\nName: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.setName();
    m.setEmployeeId();
    m.setDepartment();

    m.display();

    return 0;
}