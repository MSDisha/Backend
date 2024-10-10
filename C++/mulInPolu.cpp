#include<iostream>
using namespace std;
class A{
	public:
			int a,b;
		fun(){
			cout<<"Hello world"<<endl;
		}
};
class B{
	public:
		fun(){
			int c,d;
			cout<<"Hello world"<<endl;
			cout<<"Enter C : "<<endl;
			cin>>c;
			cout<<"Enter D : "<<endl;
			cin>>d;
			cout<<"Enter C : "<<c;
			cout<<"Enter D : "<<d;
		}
};
class C: public A,public B{
	public:
		fun(){
			A::fun();
			B::fun();
			cout<<"Enter A : "<<endl;
			cin>>a;
			cout<<"Enter B : "<<endl;
			cin>>b;
			cout<<"Enter A : "<<a;
			cout<<"Enter B : "<<b;
		}
};
main(){
	C obj;
	obj.fun();
}
