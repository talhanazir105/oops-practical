#include<iostream>
using namespace std;
class bag
{
	public:
		int n;
		void in(){
			cout<<"Enter a number : ";
		}
		void out(){
			cin>>n;
		}
};
int main(){
	bag obj;
	obj.in();
	obj.out();
	return 0;
}