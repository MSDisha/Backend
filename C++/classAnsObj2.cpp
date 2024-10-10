#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		show(){
			cout<<"Enter number a and b : ";
			cin>>a>>b;
		}
		func1(){
			cout<<"Addition is : "<<a+b<<endl;
		}
		func2(){
			cout<<"Subtraction is : "<<a-b<<endl;
		}
		func3(){
			cout<<"Multiplication is : "<<a*b<<endl;
		}
};



main(){
	A obj;
	obj.show();
	obj.func1();
	obj.func2();
	obj.func3();
}
