#include<iostream>
using namespace std;
class Book
{
	private:
		int BookId,Pages;
		float Price;
		public:
			void get()
			{
				cout<<"Enter Book ID:";
				cin>>BookId;
				cout<<"Enter Pages:";
				cin>>Pages;
				cout<<"Enter Price:";
				cin>>Price;
			}
			void show()
			{
				cout<<"BookID="<<BookId<<endl;
				cout<<"Pages="<<Pages<<endl;
				cout<<"Price="<<Price<<endl;
			}
			void set(int id,int pg,float pr)
			{
				BookId=id;
				Pages=pg;
				Price=pr;
			}
			float getPrice()
			{
				return Price;
			}
};
int main()
{
	Book b1,b2;
	b1.get();
	b2.set(2,320,150.75);
	cout<<"\nThe detail of most costly book is as follows:"<<endl;
	if(b1.getPrice()>b2.getPrice())
	b1.show();
	else
	b2.show();
	return 0;
}