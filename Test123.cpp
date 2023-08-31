#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int x;
	int y,result;
	char name[20];
	
	cout<<"Please enter Year of birth"<<endl;
	
	cin>>x;
	cout<<"Enter your name"<<endl;
	cin>>name;
	
	
	y=2019;
	result=y-x;
	cout<<""<<name<<" you are "<<result<<"years old.";
	cin>>name;
	return 0;

}
