//polymorphism:
//it includes two metods : Overloading and Overriding 
//overloading : Same function but different parameters in same class

#include<iostream>
using namespace std;
class A{	//overloading
	public:
		fun(int a, int b){
			cout<<"Hello"<<endl;
		}
		fun(){
			cout<<"World"<<endl;
		}
		fun(string a, string b){
			cout<<"Welcome!!!"<<endl;
		}
};
main(){
	A obj;
	obj.fun(10,5);
	obj.fun();
	obj.fun("Disha","Hii");
	}
