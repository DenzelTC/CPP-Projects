#include<iostream>
#include<stdlib.h>
using namespace std;

void input(char &op,int &X,int &Y){

cout<<"Enter test operation using format 'a+b':  ";
cin>>X>>op>>Y;
}
	
	int mult(int X,int Y){
	return (X*Y);
	}
	
	int add(int X,int Y){
	return (X+Y);
	}
	
	int sub(int X,int Y){
	return (X-Y);
	}


	int divide(int X,int Y){
	return (X/Y);
	}


void display(int result){
cout<<" = "<<result<<endl;
}

int main(){
char op;
int x,y;
cout<<"Welcome to C++ Functions"<<endl;
do{
int exit=1;
input (op,x,y);
		switch (op){
			case '+':
				display(add( x, y));
				break;
			
			case '*':
				display(mult( x, y));
				break;
			
			case '/':
				display(divide( x, y));
				break;
				
			case '-':
				display(sub( x, y));
				break;
		}

}while(exit);
return 0;
}
