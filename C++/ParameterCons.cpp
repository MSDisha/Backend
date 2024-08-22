#include<iostream>
using namespace std;
class Myclass{
	public:
		Myclass(int a, int b){
			cout<<"A and b is : "<<a<<endl<<b;
			cout<<"Ans : "<<a+b;
		}
};
main(){
	Myclass obj(10,50);
}
