#include<iostream>
#include<stdlib.h>
using namespace std;
int input (int num,int power){
cout<<"Enter number : "<<endl;
cin>>num;
cout<<"Enter power : "<<endl;
cin>>power;
}


int pwr(int number, int pwr ){
 	if (pwr==1){
 		return 1;
	}
	else {
		return number *pwr   
	} 
} 

int display(int num,int power,int result){

cout<<" "<<num<<" to the power"<<" "<<power<<" is equal to"<<" "<<result<<endl;
	
} 
int main(){
int num,power,result;
input (num);
display(num,power,result);
}
