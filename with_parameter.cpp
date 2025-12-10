#include<iostream>
using namespace std;

class TeaShop{
	public:
		void orderTea(string type,int qty) {
			int price;
			
			if(type=="Milk-Tea")
			price=100;
			else if (type=="Green-Tea")
			price=80;
			else
			price=70;
			
			cout<<"\n--- Bill ---\n"<<endl;
			cout<<"Tea Type:"<<type<<endl;
			cout<<"Quantity (Cups):"<<qty<<endl;
			cout<<"Total Bill: Rs "<<price*qty<<endl;
		}
};

int main()
{
	TeaShop t;
	string tea;
	int quantity;
	
	cout<<"Enter Tea Type (Milk-Tea/Green-Tea/Lemon-Tea): ";
	cin>>tea;
	cout<<"Enter Quantity(Cups): ";
	cin>>quantity;
	
	t.orderTea(tea,quantity);
	return 0;
}