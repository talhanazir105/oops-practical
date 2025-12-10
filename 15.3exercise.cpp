#include <iostream>
#include <string>

using namespace std;


class Teacher {
protected:
    string teacher_name;
    int age;
    string address;

public:
   
    void inputTeacher() {
        cout << "\n--- Input Teacher Details ---" << endl;
        cout << "Enter Teacher Name: ";
        getline(cin >> ws, teacher_name); 
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Address: ";
        getline(cin >> ws, address);
    }

    
    void displayTeacher() const {
        cout << "\n--- Teacher Details ---" << endl;
        cout << "Name: " << teacher_name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};


class Writer {
protected:
    string writer_name;
    string writer_address; 
    int num_books;

public:
   
    void inputWriter() {
        cout << "\n--- Input Writer Details ---" << endl;
        cout << "Enter Writer Name: ";
        getline(cin >> ws, writer_name);
        cout << "Enter Writer Address: ";
        getline(cin >> ws, writer_address);
        cout << "Enter Number of Books Written: ";
        cin >> num_books;
    }

    
    void displayWriter() const {
        cout << "\n--- Writer Details ---" << endl;
        cout << "Name: " << writer_name << endl;
        cout << "Address: " << writer_address << endl;
        cout << "Books Written: " << num_books << endl;
    }
};


class Scholar : public Teacher, public Writer {
public:
    
    void inputAttributes() {
        cout << "--- Input Details for the Scholar (who is both a Teacher and a Writer) ---" << endl;
        
        inputTeacher();
        inputWriter();
    }

   
    void displayAttributes() const {
        cout << "\n==========================================" << endl;
        cout << "          SCHOLAR CUM AUTHOR DETAILS        " << endl;
        cout << "==========================================" << endl;

        
        displayTeacher();
        displayWriter();
    }
};


int main() {
   
    Scholar s;

   
    s.inputAttributes();

    s.displayAttributes();

    return 0;
}