#include<iostream>
using namespace std;

class Time
{
	private:
		int hour,minutes,seconds;
		public:
			Time(int h,int m,int s){
				hour=h;
				minutes=m;
				seconds=s;
			}
			
			void show(){
					cout<<"Time "<<hour<<":"<<minutes<<":"<<seconds<<endl;
			}
			
			void operator++ (){
				minutes++;
				if (minutes>=60){
					minutes=0;
					hour++;
				}
			}
			
			void operator-- (){
				minutes--;
				if (minutes<0){
					minutes=59;
					hour--;
				}
			}
};

int main()
{
	Time t1(10,59,30);
	cout<<"Orignal ";
	t1.show();
	
	++t1;
	cout<<"After++ ";
	t1.show();
	
	--t1;
	cout<<"After-- ";
	t1.show();
	return 0;
}
