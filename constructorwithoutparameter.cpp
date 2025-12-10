#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"Constructor of class A..."<<endl;
		}
};

class B
{
	public:
		B()
		{
			cout<<"Constructor of class B..."<<endl;
		}
};

class C : public A,public B
{
	public:
		C():B(),A()
		{
			cout<<"Constructor in class C..."<<endl;
}
};

int main()
{
	C obj;
	return 0;
}