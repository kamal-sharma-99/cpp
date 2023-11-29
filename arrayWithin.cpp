//Array within class

#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		int marks[5];
		int i;
		void input (){
			cout<<"Enter your id:";
			cin>>id;
			cout<<"Enter your name:";
			cin>>name;
			for(i=0;i<5;i++){
				cout<<"Enter your marks:";
				cin>>marks[i];
			}
		}
		void display(){
			cout<<"\n your ID is:"<<id;
			cout<<"\n your name is:"<<name;
			for(i=0;i<5;i++){
				cout<<"\n your marks = "<<marks[i];
				
			}
			
		}
};
main(){
	int i;
	Student s1[3];
	for(i=0;i<3;i++){
		s1[i].input();
	}
	for(i=0;i<3;i++){
		s1[i].display();
	}
}