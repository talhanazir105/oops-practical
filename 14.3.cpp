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
				cout<<"n="<<n<<endl;
			}
			Count operator ++()
			{
				Count temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
			Count operator ++(int)
			{
				Count temp;
				temp.n=n;
				return temp;
			}
};
int main()
{
	Count x;
	x.show();
	++x;
	x++;
	x.show();
	return 0;
}