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
			int m,p,ch,total;
			cout<<"Enter your Marks";
			cout<<"Maths: ";
			cin>>m;
			cout<<"Physics: ";
			cin>>p;
			cout<<"Chemistry: ";
			cin>>ch;
			total = m+p+ch;
			cout<<"Total : ";
			total = m+p+ch;
			float percentage = (total/300);
			cout<<"Percentage : "<<percentage;
		}
		
};


main(){
	C obj;
	obj.name();
	obj.roll();
	obj.marks();
	
}
