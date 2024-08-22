//SingleLevel Inheritance

#include<iostream>
using namespace std;
class A{
	public:
		myfunc(){
			cout<<"This is my parent class";
		}
};
class B:public A{
	public:
		myfunc1(){
			cout<<"This is my child class";
		};
};
main(){
	B obj;
	obj.myfunc();
	obj.myfunc1();
}
