#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    BankAccount(string n = "", int acc = 0, string type = "", double bal = 0) {
        depositorName = n;
        accountNumber = acc;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void display() {
        cout << "\nName: " << depositorName
             << "\nAccount No: " << accountNumber
             << "\nType: " << accountType
             << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount b("Talha", 12345, "Saving", 100000);
    b.display();
    b.deposit(500);
    b.withdraw(200);
    b.display();
    return 0;
}
