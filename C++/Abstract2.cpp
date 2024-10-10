#include<iostream>
using namespace std;
class Hello{
	
	public: 
	virtual wheel()=0;
	virtual colour()=0;
};
class Truck:public Hello{
	public:
	wheel(){
		cout<<"Truck has 6 wheels"<<endl;
	}
	colour(){
		cout<<"Its colour is red"<<endl;
	}
};
class Car:public Hello{
	public:
	wheel(){
		cout<<"Car has 4 wheels"<<endl;
	}
	colour(){
		cout<<"Its colour is Black"<<endl;
	}
};
class Bike:public Hello{
	public:
	wheel(){
		cout<<"Bike has 2 wheels"<<endl;
	}
	colour(){
		cout<<"Its colour is White"<<endl;
	}
};
main(){
	Truck obj1;
	obj1.wheel();
	obj1.colour();
	
	Car obj2;
	obj2.wheel();
	obj2.colour();
	
	Bike obj3;
	obj3.wheel();
	obj3.colour();
}
