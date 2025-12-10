#include<iostream>
using namespace std;

class Animal{
	public:
		void sound(){
			cout<<"The Animal makes a sound."<<endl;
		}
};

class Dog:public Animal{
	public:
		void sound(){
			Animal::sound();
			cout<<"The Dog Barks."<<endl;
		}
};

int main()
{
	Dog d;
	d.sound();
	return 0;
}