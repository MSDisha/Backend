#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class B:public A{
	public:
		Hello(){
			cout<<"Enter A : "<<endl;
			cin>>a;
			cout<<"A : "<<a;
		}
		
};
class C{
	public:
		int b;
		
};
class D:public B,public C{
	public:
		Hello1(){
			cout<<"Enter B : "<<endl;
			cin>>b;
			cout<<"B : "<<b;
		}
		
};

main(){
	D obj;
	obj.Hello();
	obj.Hello1();
}
