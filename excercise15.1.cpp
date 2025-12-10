#include <iostream>
#include <string>

using namespace std;


class Employee {
protected:
    
    int employee_id;
    int scale;

public:
   
    void input_employee() {
        cout << "\n--- Employee Data Input ---" << endl;
        cout << "Enter Employee ID: ";
        cin >> employee_id;
        cout << "Enter Employee Scale: ";
        cin >> scale;
    }

    
    void show_employee() const {
        cout << "\n--- Employee Data ---" << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Scale: " << scale << endl;
    }
};


class Manager : public Employee {
private:
   
    int manager_id;
    string department;

public:
   
    void input_attributes() {
      
        input_employee();

       
        cout << "\n--- Manager Specific Data Input ---" << endl;
        cout << "Enter Manager ID: ";
        cin >> manager_id;
        
        cin.ignore(); 
        cout << "Enter Department: ";
       
        getline(cin, department);
    }

    
    void show_attributes() const {
      
        show_employee();

        cout << "\n--- Manager Specific Data ---" << endl;
        cout << "Manager ID: " << manager_id << endl;
        cout << "Department: " << department << endl;
    }
};


int main() {
    
    Manager m1;

    
    cout << "### Inputting Data for Manager ###" << endl;
    m1.input_attributes();

    
    cout << "\n\n### Displaying Data for Manager ###" << endl;
    m1.show_attributes();
    
    return 0;
}