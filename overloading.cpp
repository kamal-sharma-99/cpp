
#include<iostream>
using namespace std;
class overloadingDemo{
	public:
		void add(int a, int b){
			cout<<a+b<<endl;
		}
		void add(float a, float b){
			cout<<a+b<<endl;
		}
		void add(int a, int b, int c){
			cout<<a+b+c<<endl;
		}
};



main(){
	overloadingDemo od;
	od.add(10,20);
	od.add(10.00f,20.00f);
	od.add(10,20,30);
}