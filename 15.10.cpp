#include <iostream>
using namespace std;
class person
{
protected:
	int id;
	char name[50], address[100];

public:
	person()
	{
		id = 0;
		name[0] = '\0';
		address[0] = '\0';
	}
	void input()
	{
		cout << "Enter your id:";
		cin >> id;
		cout << "Enter your name:";
		cin >> name;
		cout << "Enter your Address:";
		cin >> address;
	}
	void output()
	{
		cout << "\nPersonal Information:\n";
		cout << "id=" << id << endl;
		cout << "Name=" << name << endl;
		cout << "Address=" << address << endl;
	}
};
class Student : public person
{
private:
	int rno, marks;

public:
	Student()
	{
	person:
		person();
		rno = marks = 0;
	}
	void input()
	{
		person::input();
		cout << "Enter your roll no:";
		cin >> rno;
		cout << "Enter your marks:";
		cin >> marks;
	}
	void output()
	{
		person::output();
		cout << "\nEducational Information:\n";
		cout << "Rool No=" << rno << endl;
		cout << "Marks=" << marks << endl;
	}
};
class Scolarship : public Student
{
private:
	char sname[50];
	long amount;

public:
	void input()
	{
		Student::input();
		cout << "Enter scolarship name:";
		cin >> sname;
		cout << "Enter scolarship amount:";
		cin >> amount;
	}
	void output()
	{
		Student::output();
		cout << "\nScolarship Information:\n";
		cout << "Scolarship Name:" << sname << endl;
		cout << "Scolarship amount:RS." << amount << endl;
	}
};
int main()
{
	Scolarship obj;
	obj.input();
	obj.output();
	return 0;
}