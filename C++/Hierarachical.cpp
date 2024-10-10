#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
};
class B:public A{
	public:
		Hello(){
			cout<<"Enter A : "<<endl;
			cin>>a;
			cout<<"A : "<<a;
		}
		
};
class C:public A{
	public:
		Hello1(){
			cout<<"Enter B : "<<endl;
			cin>>b;
			cout<<"B : "<<b;
		}
		
};
class D:public A{
	public:
		Hello2(){
			cout<<"Enter a: "<<endl;
			cin>>a;
			cout<<"Enetr b: "<<endl;
			cin>>b;
			cout<<"addtion: "<<a+b<<endl;
		}
};

main(){
	B obj1;
	C obj2;
	D obj3;
	obj1.Hello();
	obj2.Hello1();
	obj3.Hello2();
}
