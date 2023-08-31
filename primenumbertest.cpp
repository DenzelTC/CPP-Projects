#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int isprime=1 ;
int num;
int denominator,numerator;
cin>>num;
	for (numerator=2;numerator<=num;numerator++){
			 isprime=1;
		for (denominator=2;denominator<num/2;denominator++){
			if (numerator%denominator==0){
			isprime=0;
			}
		}
	}

if(isprime==1){
	cout<<" "<<num<<endl;
}
return 0;
}
