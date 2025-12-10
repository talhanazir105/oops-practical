#include <iostream>
#include<string>
using namespace std;

class Teacher {
protected:
    string teacherName;
    int age;
    string address;

public:
    void inputTeacher() {
        cout << "\nEnter Teacher Name: ";
        getline(cin, teacherName);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);
    }

    void displayTeacher() {
        cout << "\n--- Teacher Information ---\n";
        cout << "Name: " << teacherName << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};


class Writer {
protected:
    string writerName;
    string writerAddress;
    int books;

public:
    void inputWriter() {
        cout << "\nEnter Writer Name: ";
        getline(cin, writerName);
        cout << "Enter Writer Address: ";
        getline(cin, writerAddress);
        cout << "Enter Number of Books Written: ";
        cin >> books;
        cin.ignore();
    }

    void displayWriter() {
        cout << "\n--- Writer Information ---\n";
        cout << "Writer Name: " << writerName << endl;
        cout << "Writer Address: " << writerAddress << endl;
        cout << "Books Written: " << books << endl;
    }
};


class Scholar : public Teacher, public Writer {
public:
    void inputScholar() {
        cout << "\n=== Enter Scholar Details ===\n";
        cout << "(As Teacher)\n";
        inputTeacher();
        cout << "\n(As Writer)\n";
        inputWriter();
    }

    void displayScholar() {
        cout << "\n=========== Scholar Details ===========\n";
        displayTeacher();
        displayWriter();
    }
};


int main() {
    Scholar s;
    s.inputScholar();
    s.displayScholar();
    return 0;
}
