#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;
public:
    BankAccount(string name = "", string accNum = "", string accType = "", double bal = 0.0) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
    BankAccount operator+(const BankAccount& acc) {
        BankAccount temp;
        temp.depositorName = depositorName;
        temp.accountNumber = accountNumber;
        temp.accountType = accountType;
        temp.balance = balance + acc.balance;
        return temp;
    }
};

int main() {
    BankAccount acc1("John Doe", "123456789", "Savings", 1000.0);
    BankAccount acc2("Jane Doe", "987654321", "Current", 500.0);

    acc1.display();
    acc2.display();

    acc1.deposit(500.0);
    acc1.display();

    acc1.withdraw(200.0);
    acc1.display();

    BankAccount acc3 = acc1 + acc2;
    acc3.display();

    return 0;
}