#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    void setVehicle() {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    void input() {
        setVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void display() {
        cout << "\nCar Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    void input() {
        setVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void display() {
        cout << "\nBike Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    cout << "Enter Car Details" << endl;
    car.input();

    cout << "\nEnter Bike Details" << endl;
    bike.input();

    car.display();
    bike.display();

    return 0;
}