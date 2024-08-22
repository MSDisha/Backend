#include<iostream>
using namespace std;
class Hello{
	public:
		Hello(){//constructor
			cout<<"Welcome to pur website"<<endl;
		}
		reverse(){
			int n,res,rev;
			cout<<"Enter number: ";
			cin>>n;
			while(n!=0){
				res=n%10;
				rev=rev*10+res;
				n/=10;
			}
			cout<<"Reversed number : "<<rev<<endl;
			
			
		}
		~Hello(){   //deconstructor
			cout<<"Thankyou to visit our website";
		}
};
main(){
	Hello obj;
	obj.reverse();
}
