//                              Rectangle Triangle Circle
#include<iostream>
using namespace std;
class overloading{
	public:
		void area(int l, int b){
			cout<<l*b<<endl;
		}
		void area(float r,float p=3.14){
//			float p = 3.14;
			cout<<p*r*r<<endl;
		}
		void area(double base, double h){
//			int half = base/2;
			cout<<.5*base*h<<endl;
		}
};

main(){
	overloading a;
	a.area(10,2);
	a.area(5.00f);
	a.area(14.00,7.00);
	
}