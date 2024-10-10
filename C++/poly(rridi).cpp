//overriding: differnt class with same function with the use of scope resolution operator(::)
//by inheriting both class or multiple class

#include<iostream>
using namespace std;
class A{
	public:
		fun(){
			cout<<"Hello"<<endl;
		}

};
class B:public A{
	public:
		fun(){
			A::fun(); //scope resolution operator
			cout<<"World"<<endl;
		}		
};
main(){
	B obj;
	obj.fun();
	
	}
