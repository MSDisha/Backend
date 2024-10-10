#include<iostream>
using namespace std;

class A{
	public:
		int c,d;
	hello(){
		int a,b;
		cout<<"Enter A : "<<endl;
		cin>>a;
		cout<<"Enter B : "<<endl;
		cin>>b;
		this->c=a;
		this->d=b;
	}
	hello1(){
		cout<<"A is : "<<this->c;
		cout<<"B is : "<<this->d;
		
	}
};
main(){
	A obj;
	obj.hello();
	obj.hello1();
}
