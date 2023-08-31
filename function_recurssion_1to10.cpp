#include<iostream>
#include<stdlib.h>
using namespace std;

int print(int num){
	num=2;
if (num==1){
	return 1;
	}
 	return 10 - print(num);

}

int display(){
	int num1;
	cout<<" "<<print(num1);
}

int main(){
	display();
}
