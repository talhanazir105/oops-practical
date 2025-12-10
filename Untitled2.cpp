#include<iostream>
using namespace std;
class laptop{
	public:
		string ram;
		string modle;
		void in() {
			cout<<"Enter Laptop Ram:";
			cin>>ram;
				cout<<"Enter Laptop Modle:";
			cin>>modle;
		}
		
		void out() {
			cout<<"The Ram of Laptop:"<<ram<<endl;
			cout<<"The Modle of Laptop:"<<modle<<endl;
		}
		};

	
		int main() {
			laptop object;
			object.in();
			object.out();
		
		return 0;
	}
