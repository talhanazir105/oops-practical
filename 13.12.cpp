#include<iostream>
using namespace std;
class book
{
	private:
		int pg,pr;
		char title[50];
		public:
			void get()
			{
				cout<<"Enter title : ";
				gets(title);
				cout<<"Enter pages : ";
				cin>>pg;
				cout<<"Enter price : ";
				cin>>pr;	
			}
			void show()
			{
				cout<<"title : "<<title<<endl;
				cout<<"pages : "<<pg<<endl;
				cout<<"price : "<<pr<<endl;		
			}
};
int main()
{
	book b1;
	b1.get();
	book b2(b1);
	book b3=b1;
	cout<<"\nThe details of b1:"<<endl;
	b1.show();
	cout<<"\nThe details of b2:"<<endl;
	b2.show();
	cout<<"\nThe details of b3:"<<endl;
	b3.show();
	return 0;
}