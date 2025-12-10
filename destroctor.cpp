#include<iostream>
using namespace std;
class Test
{
	private:
		int n;
		public:
			Test()
			{
				cout<<"Object Created...."<<endl;
			}
			~Test()
			{
				cout<<"Object destroyed...."<<endl;
			}
};
int main()
{
	Test a,b,c;
	return 0;
}