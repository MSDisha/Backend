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

main(){
	B obj1;
	C obj2;
	obj1.Hello();
	obj2.Hello1();
}
