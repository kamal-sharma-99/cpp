#include<iostream>
using namespace std;
class absdemo{
	private:
		int x=10,y=20;
		public:
			void display(){
				cout<<"X = "<<x;
				cout<<"\nY = "<<y;				
			}
};
main(){
	absdemo ad;
	ad.display();	
}