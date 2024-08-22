#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		func1(){
			cout<<"Enter a number a and b : ";
			cin>>a>>b;
			cout<<"Addition is : "<<a+b<<endl;
		}
		func2(){
			cout<<"Enter a number a and b : ";
			cin>>a>>b;
			cout<<"Subtraction is : "<<a-b<<endl;
		}
		func3(){
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
