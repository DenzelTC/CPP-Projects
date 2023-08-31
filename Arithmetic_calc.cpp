#include <iostream>
using namespace std;
int main (){
	char ch;
	int x,y,add,mult,div,sub,mod;
	char name;
	
	cout<<"Calculator"<<endl
	<<"Enter the 2 numbers :  ";
	cin>>x>>y;
	add=x+y;
	mult=x*y;
	div=x/y;
	sub=x-y;
	mod=x%y;
	cout<<"Addition result is "<<add <<endl
	<<"Multiplication result is "<<mult <<endl
	<<"Division result is "<<div <<endl
	<<"Subtraction result is "<<sub <<endl
	<<"Modulus "<<mod;
	cout<<"enter  your name  "<<add <<endl;
	cin>>name; 
	cout<<" "<<name;
return 0;
}
