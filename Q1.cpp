#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    static int employeeCount;  

public:
    Employee(int id) {
        employeeID = id;
        employeeCount++;  
}

    void displayID() const {
        cout << "Employee ID: " << employeeID << endl;
}

    static void displayCount() {
        cout << "Total Employees: " << employeeCount << endl;
}
};

int Employee::employeeCount = 0;

int main() {
    Employee e1(101);
    Employee e2(102);
    Employee e3(103);

    e1.displayID();
    e2.displayID();
    e3.displayID();

    Employee::displayCount();

    return 0;
}
