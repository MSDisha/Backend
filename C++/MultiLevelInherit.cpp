//Multilevel Ineritance

#include<iostream>
using namespace std;
class A{
	public:
		myfunc(){
			cout<<"This is my parent class"<<endl;
		}
};
class B:public A{
	public:
		myfunc1(){
			cout<<"This is my grandchild class"<<endl;
		};
};
class C:public B{
	public:
		myfunc2(){
			cout<<"This is my child class";
		};
};
main(){
	C obj;
	obj.myfunc();
	obj.myfunc1();
	obj.myfunc2();
}
