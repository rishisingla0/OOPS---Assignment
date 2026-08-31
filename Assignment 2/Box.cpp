#include <iostream>
using namespace std;

class Box {
private:
    float length;
    float width;
    float height;

public:
    // Default constructor
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate and display volume
    void displayVolume() {
        float volume = length * width * height;

        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << volume << endl;
    }
};

int main() {

    // Object using default constructor
    Box box1;

    cout << "Box 1 (Default Constructor)" << endl;
    box1.displayVolume();

    cout << endl;

    // Object using parameterized constructor
    Box box2(10, 5, 4);

    cout << "Box 2 (Parameterized Constructor)" << endl;
    box2.displayVolume();

    return 0;
}