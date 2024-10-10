#include<iostream>
using namespace std;
class A{
	public:
		func1(){
			int a,b;
			cout<<"Enter a number a and b : "<<endl;
			cin>>a>>b;
			cout<<"Addition is : "<<a+b<<endl;
		}
};
class B{
	public:
		func2(){
			int a,b;
			cout<<"Enter a number a and b : "<<endl;
			cin>>a>>b;
			cout<<"Subtraction is : "<<a-b<<endl;
		}
};
class C{
	public:
		func3(){
			int a,b;
			cout<<"Enter a number a and b : "<<endl;
			cin>>a>>b;
			cout<<"Multiplication is : "<<a*b<<endl;
		}
};


main(){
	A obj1;
	B obj2;
	C obj3;
	obj1.func1();
	obj2.func2();
	obj3.func3();
}
