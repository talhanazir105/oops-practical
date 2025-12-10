#include<iostream>
using namespace std;
class String
{
	private:
		char str[50];
	public:
		String()
		{
			str[0]='\0';
		}
		void in()
		{
			cout<<"Enter string:";
			gets(str);
		}
		void show()
		{
			cout<<str <<endl;
		}
		String operator + (String s)
		{
			String temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
			}
};
int main()
{
	String s1,s2,s3;
	s1.in();
	s2.in();
	cout<<"s1 = ";
	s1.show();
	cout<<"s2 = ";
	s2.show();
	cout<<"s3 = ";
	s3.show();
	cout<<"Concatenating s1 and s2 in s3..."<<endl;
	s3=s1+s2;
	cout<<"s3 = ";
	s3.show();
	return 0;
}