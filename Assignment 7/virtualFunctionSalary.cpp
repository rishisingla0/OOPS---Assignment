#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float s) {
        name = n;
        basicSalary = s;
    }

    virtual void calculateSalary() {
        cout << "Calculating employee salary..." << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, float s) : Employee(n, s) {}

    void calculateSalary() {
        float salary = basicSalary + (basicSalary * 0.20);
        cout << "Permanent Employee: " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(string n, float s) : Employee(n, s) {}

    void calculateSalary() {
        float salary = basicSalary + (basicSalary * 0.10);
        cout << "Contract Employee: " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main() {
    PermanentEmployee p("Rahul", 30000);
    ContractEmployee c("Aman", 20000);

    Employee *ptr;

    ptr = &p;
    ptr->calculateSalary();

    ptr = &c;
    ptr->calculateSalary();

    return 0;
}