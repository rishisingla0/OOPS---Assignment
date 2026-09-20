#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void setMarks() {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << marks + sportsScore << endl;
    }
};

int main() {
    Result r;

    r.setMarks();
    r.setSportsScore();
    r.display();

    return 0;
}