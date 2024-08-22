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
			
			cout<<"Total : "<<m+p+ch<<endl;
		}
		
};

class D:public C{
	public:
		perc(){
			int m,p,ch;
			float total = m+p+ch;
			float percentage = (total/300)*100;
			cout<<"Percentage : "<<percentage;

		}
};
main(){
	D obj;
	obj.name();
	obj.roll();
	obj.marks();
	obj.perc();
	
}
