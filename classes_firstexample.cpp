#include<iostream>
#include<stdlib.h>
using namespace std;
 class Animal{
 	char legs [20];
 	char eyes [20];
 	char ears [20];
 	char mouth [20];
 	char nose [20];
 	char name [20];
 	
 	public:
 	void create(){
 	cout<<"Enter type of the Animal"<<endl;
	cin.getline(name ,50);
	cout<<"Describe the "<<name<<"'s legs."<<endl;
	cin.getline(legs ,50);
	cout<<"Describe the "<<name<<"'s eyes."<<endl;
	cin.getline(eyes, 50);
	cout<<"Describe the "<<name<<"'s ears."<<endl;
	cin.getline(ears, 50);	
	cout<<"Describe the "<<name<<"'s mouth"<<endl;
	cin.getline(mouth, 50);
	cout<<"Describe the  "<<name<<"'s nose."<<endl;
	
	 };
 	void move (){
 	cout<<"The "<<name<<" moves with it's "<<legs<<" legs."<<endl;
	 };
 	void see(){
	cout<<"The "<<name<<" uses it's "<<eyes<<" eyes to see."<<endl;
	};
 	void hear();
 	void eat();
 	void smell();
 	
 };
 
 

	void Animal::hear(){
	cout<<"The "<<name<<" uses it's'"<<ears<<" to hear."<<endl;
	}
	
	void Animal::eat(){
		cout<<"The "<<name<<" eats with it's "<<mouth<<" mouth."<<endl;
	}
 
 	void Animal::smell(){
 	cout<<"The "<<name<<" use it's'"<<nose<<" to smell.";
	 }


 

int main(){
	Animal a;	
	a.create();
	a.move();
	a.see();
	a.hear();
	a.eat();
	a.smell();
return 0;
}
