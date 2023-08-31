#include<iostream>
#include<stdlib.h>
using namespace std;
 void swap(int *X, int *Y){
 	int temp;
 	temp=*X;
 	*X=*Y;
 	*Y=temp;
 
 }
int main(){
int x,y;
cout<<"Enter the first number - ";
cin>>x;
cout<<"Enter the second number - ";
cin>>y;
swap(&x,&y);
cout<<"\nThe first number is now - "<<x<<endl
<<"The second number is now - "<<y;
}
