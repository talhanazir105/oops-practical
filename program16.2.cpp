#include <iostream>
using namespace std;

class Person
{
private:
	char name[50];

public:
	void get()
	{
		cout << "Enter your name:";
		cin >> name;
	}
	void show()
	{
		cout << "Your name=" << name << endl;
	}
};

int main()
{
	Person *ptr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		ptr[i] = new Person;
		ptr[i]->get();
	}
	for (i = 0; i < 5; i++)
		ptr[i]->show();
	return 0;
}