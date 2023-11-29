#include<iostream>
using namespace std;
class Parent{
	public:
		void mobile(){
			cout<<"Samsung S23";
		}
};
class Child : public Parent{
	public:
		void mobile(){
			Parent::mobile();                   //Scope resolution operator
			cout<<"Samsung Fold";
		}
};
main(){
	Child c1;
	c1.mobile();
}