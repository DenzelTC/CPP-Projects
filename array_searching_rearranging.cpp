#include <iostream>
using namespace std;
int main (){
int i,temp;
int num[5];
cout<<"\t\t\tProgram stores and displays largest element in an array"<<endl<<endl;
for(i=0;i<5;i++){
	cout<<"Enter number: ";
	cin>>num[i];
}
for(i=0;i<4;i++){
		if(num[i]>num[i+1]){
			temp= num[i];
			num[i]=num[i+1];
			num[i+1]=temp;
			i=-1;
		}
	}
		cout<<"Ascending order - {";
	for(i=0;i<5;i++){
		cout<<",\t "<<num[i];
	}
	cout<<"}"<<endl ;
	
	if()
	cout<<"largest is  "<<num[i];

return 0;
}
