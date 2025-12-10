#include<iostream>
using namespace std;
class Count
{
	private:
		int n;
	public:
		Count()
		{
			n=0;
		}
		void show()
		{
			cout<<"n = "<<n <<endl;
		}
		void operator++()
		{
			n = n+1;
		}
};
int n()
{
	Count obj;
	obj.show();
	++obj;
    obj.show();
    return 0;
		
}