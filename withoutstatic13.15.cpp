#include<iostream>
using namespace std;
class yahoo
{
	private:
	     int n=0;
		public:
			yahoo()
			{
				n++;
			}
			void show()
			{
				cout<<"you have created "<<n<<" objects so far."<<endl;
			}
};
int main()
{
	yahoo x,y;
	x.show();
	yahoo z;
	x.show();
	return 0;
}
