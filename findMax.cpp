#include<iostream>
using namespace std;
main(){
	int a=3, b=1, c=5;
	
	if(a>b || a<b){
		
		if(a>c){
			cout<<"a is max";
		}
		else{
			cout<<"c is max";
		}
	}
	else{
			cout<<"b is max";
	}
}