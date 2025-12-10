#include<iostream>
#include<string>
using namespace std;
class Person
{
	protected:
		int id;
		char name[50],address[100];
		public:
			Person()
			{
				id=0;
				name[0]='\0';
				address[0]='\0';
			}
			void GetInfo()
			{
				cout<<"Enter Your id: ";
				cin>>id;
				cout<<"Enter Your name: ";
				cin>>name;
				cout<<"Enter Your address: ";
				cin>>address;
			}
			void ShowInfo()
			{
				cout<<"\nYour personal information is as follows:\n";
				cout<<"id="<<id<<endl;
				cout<<"Address="<<address<<endl;
			}
};
class Student:public Person
{
	private:
	int rno,marks;
	public:
		Student():Person()
		{
			Person:
			rno=marks=0;
		}
		void GetEdu()
		{
			cout<<"Enter Your Roll No: ";
			cin>>rno;
			cout<<"Enter Your Marks: ";
			cin>>marks;
		}
		void ShowEdu()
		{
			cout<<"\nYour educational information is as follows:\n";
			cout<<"Roll No="<<rno<<endl;
			cout<<"Marks="<<marks<<endl;
		}
};
int main()
{
	Student s;
	s.GetInfo();
	s.GetEdu();
	s.ShowInfo();
	s.ShowEdu();
	return 0;
}
