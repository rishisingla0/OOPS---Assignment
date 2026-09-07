#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;
    static int totalAccounts;

public:
    BankAccount(int a, float b) {
        accountNo = a;
        balance = b;
        totalAccounts++;
    }

    friend void display(BankAccount b);

    static void displayTotalAccounts() {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void display(BankAccount b) {
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main() {
    BankAccount b1(101, 5000);
    BankAccount b2(102, 7500);
    BankAccount b3(103, 10000);

    cout << "Account 1:" << endl;
    display(b1);

    cout << endl;

    cout << "Account 2:" << endl;
    display(b2);

    cout << endl;

    cout << "Account 3:" << endl;
    display(b3);

    cout << endl;

    BankAccount::displayTotalAccounts();

    return 0;
}