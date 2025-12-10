#include <iostream>
using namespace std;
class A {
private:
int dataA;
public:
A()
{
dataA=100;}
friend class B;//declaring class B as friend 
};
class B{
public:
void display(A obj) {
cout <<"Data of class A:" <<obj.dataA<<endl;
}
};
int main(){
A a1;
B b1;
b1.display(a1);
}