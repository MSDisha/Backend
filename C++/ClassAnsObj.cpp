#include<iostream>
using namespace std;
class A{
	public:
		func1(){
			int a,b;
			cout<<"Enter a number a and b : ";
			cin>>a>>b;
			cout<<"Addition is : "<<a+b<<endl;
		}
		func2(){
			int a,b;
			cout<<"Enter a number a and b : ";
			cin>>a>>b;
			cout<<"Subtraction is : "<<a-b<<endl;
		}
		func3(){
			int a,b;
			cout<<"Enter a number a and b : ";
			cin>>a>>b;
			cout<<"Multiplication is : "<<a*b<<endl;
		}
};



main(){
	A obj;
	obj.func1();
	obj.func2();
	obj.func3();
}
