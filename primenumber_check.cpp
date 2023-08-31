#include<iostream>
#include<stdlib.h>
using namespace std;
int prime(){
int num=0;
int i;
int j;
if (num>=0){
	
    for (j=0;j<20;j++){
	
		for(i=2;i<=2; i++)
	    	{
	        	if(num%i>=1){
	           	cout<<" prime number -: "<<num<<endl;
	           	num++;
	           }

	           	else {
	           		num++;
				   }
			}
		}
	}

 }
 
 int main(){
cout<<"\t\t\tPrime numbers below 20"<<endl<<endl;
prime();
return 0;
 }
