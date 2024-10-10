#include<iostream>
using namespace std;

class A{
	private:

			int a,b;
			friend show(A& obj);
		
		
		};
		show(A& obj)
		{
			cout<<"Enter a : ";
			cin>>obj.a;
			cout<<"Enter b : ";
			cin>>obj.b;
			
			cout<<"Addition: "<<obj.a + obj.b;
			
		}


		

main(){
	A obj;
	show(obj);
}
