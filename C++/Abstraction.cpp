//Abstraction : Data hiding 
#include<iostream>
using namespace std;
class Employee{ //abstracted class
	public:
		info(){
			cout<<"Your salary will transfer in your account"<<endl;
		}
		virtual salary()=0; //pure virtual function which is hidden 
};
class A:public Employee{
	public:
	salary(){
		cout<<"A got 20K"<<endl;
	}
};
class B: public Employee{
		public:
	salary (){
		cout<<"B got 10K"<<endl;
	}
};
class C: public Employee{
		public:
	salary (){
		cout<<"C got 30K"<<endl;
	}
};


main(){
	A obj;
	obj.info();
	obj.salary();
	B obj1;
	obj1.info();
	obj1.salary();
	C obj2;
	obj2.info();
	obj2.salary();
}
