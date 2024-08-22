#include<iostream>
using namespace std;

class A{
	protected:
			int a,b;
	
};
class B{
	public:
		Hello(){	
			cout<<"Hello this is B";
		}
};
class C: public A,public B{
	public:
		Hello1(){
			cout<<"Hello this is C ";
			cout<<" Enter A : ";
			cin>>a;
			cout<<" Enter B : ";
			cin>>b;
			cout<<"A: "<<a;
			cout<<"B: "<<b;

		}
};
main(){
	C obj;
	obj.Hello();
	obj.Hello1();
}
