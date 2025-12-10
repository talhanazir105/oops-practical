#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    string rollNo;
    int semester;
    float gpa;
};

class ClassSystem
{
private:
    vector<Student> students;
    int rollCounter = 1; // Auto roll number start

    string generateRollNo()
    {
        string roll = "UAF-IT-A-";
        roll += to_string(100 + rollCounter).substr(1); // e.g. 001, 002
        rollCounter++;
        return roll;
    }

public:
    void addStudent()
    {
        Student s;
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, s.name);
        cout << "Enter Semester: ";
        cin >> s.semester;
        cout << "Enter GPA: ";
        cin >> s.gpa;

        s.rollNo = generateRollNo(); // auto roll number
        students.push_back(s);
        cout << "\n✅ Student added successfully with Roll No: " << s.rollNo << "\n";
    }

    void displayStudents()
    {
        if (students.empty())
        {
            cout << "\n⚠️ No students found!\n";
            return;
        }
        cout << "\n--- Student List (IT Dept, Section A) ---\n";
        cout << left << setw(5) << "No."
             << setw(20) << "Name"
             << setw(12) << "Roll No"
             << setw(10) << "Semester"
             << setw(6) << "GPA" << endl;
        cout << "---------------------------------------------------------\n";
        for (size_t i = 0; i < students.size(); i++)
        {
            cout << left << setw(5) << i + 1
                 << setw(20) << students[i].name
                 << setw(12) << students[i].rollNo
                 << setw(10) << students[i].semester
                 << setw(6) << students[i].gpa << endl;
        }
    }

    void searchStudent()
    {
        string roll;
        cout << "Enter Roll No to Search: ";
        cin >> roll;

        for (auto &s : students)
        {
            if (s.rollNo == roll)
            {
                cout << "\n🎯 Student Found:\n";
                cout << "Name: " << s.name << "\nRoll No: " << s.rollNo
                     << "\nSemester: " << s.semester << "\nGPA: " << s.gpa << endl;
                return;
            }
        }
        cout << "\n❌ Student not found!\n";
    }

    void deleteStudent()
    {
        string roll;
        cout << "Enter Roll No to Delete: ";
        cin >> roll;

        for (size_t i = 0; i < students.size(); i++)
        {
            if (students[i].rollNo == roll)
            {
                students.erase(students.begin() + i);
                cout << "\n🗑️ Student deleted successfully!\n";
                return;
            }
        }
        cout << "\n❌ Student not found!\n";
    }
};

int main()
{
    ClassSystem cs;
    int choice;

    do
    {
        cout << "\n====== Class Management System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cs.addStudent();
            break;
        case 2:
            cs.displayStudents();
            break;
        case 3:
            cs.searchStudent();
            break;
        case 4:
            cs.deleteStudent();
            break;
        case 5:
            cout << "\n👋 Exiting...\n";
            break;
        default:
            cout << "\n⚠️ Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
