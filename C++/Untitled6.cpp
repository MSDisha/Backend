#include<iostream>
using namespace std;
class A{
	public:
		name(){
			string a;
			cout<<"Enter your name : ";
			cin>>a;
		}
				
};
class B:public A{
	public:
		roll(){
			int b;
			cout<<"Enter your roll no : ";
			cin>>b;
		}
		
};
class C:public B{
	public:
		marks(){
			int m,p,ch;
			cout<<"Enter your Marks";
			cout<<"Maths: ";
			cin>>m;
			cout<<"Physics: ";
			cin>>p;
			cout<<"Chemistry: ";
			cin>>ch;
		}
		
};
class D:public C{
	public:
		add(){
			int add;
			cout<<"Total : "<<m+p+c;
		}
};
class E:public D{
	public:
		perc(){
			int per;
			cout<<"percentage : "<<(m+p+c/300)*100<<"%";
		}
};
main(){
	E obj;
	obj.name();
	obj.roll();
	obj.marks();
	obj.add();
	obj.perc();
	
}
