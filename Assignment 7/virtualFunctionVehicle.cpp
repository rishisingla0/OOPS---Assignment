#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Vehicle information" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayInfo() {
        cout << "This is a Car." << endl;
        cout << "Number of wheels: 4" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() {
        cout << "This is a Bike." << endl;
        cout << "Number of wheels: 2" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() {
        cout << "This is a Bus." << endl;
        cout << "Number of wheels: 6" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Bus bus;

    Vehicle *ptr;

    ptr = &c;
    ptr->displayInfo();

    ptr = &b;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}