#include<iostream>
using namespace std;
main(){
	int a=5, b=10;
	
	cout<<"Before swaping a is "<<a;
	cout<<"\nBefore swaping b is "<<b;
	
	a=a*b;
//	a=5*10=50
	b=a/b;
//	b=50/10=5
	a=a/b;
	
	
	cout<<"\nAfter swaping a is "<<a;
	cout<<"\nAfter swaping b is "<<b;
}