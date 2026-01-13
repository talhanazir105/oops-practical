#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    string type;
    float balance;

public:
    // Constructor to assign initial values
    BankAccount(string n, int num, string t, float b) {
        name = n;
        accNumber = num;
        type = t;
        balance = b;
    }

    // Function to deposit amount
    void deposit(float amount) {
        balance += amount;
    }

    // Function to withdraw amount
    void withdraw(float amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << " | Balance: " << balance << endl;
    }

    // Overload binary + operator to add balance of another account to this one
    void operator +(BankAccount obj) {
        balance = balance + obj.balance;
    }
};

int main() {
    BankAccount acc1("Ali", 101, "Saving", 5000);
    BankAccount acc2("Ahmed", 102, "Current", 3000);

    cout << "--- Before Adding ---" << endl;
    acc1.display();
    acc2.display();

    // Adding acc2 balance into acc1 using overloaded + operator
    acc1 + acc2; 

    cout << "\n--- After Adding (acc1 + acc2) ---" << endl;
    acc1.display(); // Ab Ali ka balance 5000 + 3000 = 8000 hoga

    return 0;
}