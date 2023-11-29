
#include<iostream>
using namespace std;
class calc{
	public:
		void add(int a, int b){
			cout<<a+b<<endl;
		}
		void add(double c, double d){
			cout<<c-d<<endl;
		}
		void add(int e, int f, int z){
			cout<<e*f*z<<endl;
		}
		void add(float g, float h){
			cout<<g/h<<endl;
		}
		
};

main(){
	calc over;
	over.add(10,2);
	over.add(10.67,2.90);
	over.add(10,2,5);
	over.add(10.00f,2.00f);
}