#include <iostream>
#include<queue>
using namespace std;

int main() {
const int SIZE=5;
int arr[SIZE]={-999,-999,-999,-999,-999};//,-999,-999,-999,-999,-999};
unsigned int option;
int x,i,exit=1;
cout<<"Stack"<<endl;
	do{
		cout<<"\n1.....Join stack\n2.... Service\n3.....List"<<endl;
		cin>>option;
		switch(option){
			case 1:
				i=0;
				while(arr[i]!=-999&&i!=SIZE){
					cout<<"pos "<<i<<endl;
					i++;
				}
				
				if(i>SIZE-1){
					cout<<"Stack is full";
					
				}
				else{	
				
				if (i==0){
					cout<<"Stack is empty"<<endl;
				}
				
				cout<<"Generate ticket number ";
				cin>>x;
				}
				arr[i++]=x;
				break;
				
			case 2:
				i=0;
				if (arr[0]=-999){
					cout<<"Stack is empty";
				}
			
				else {
					while(arr[i]!=-999&&i!=SIZE){
					cout<<"pos "<<i<<endl;
					i++;
					}
					if (i==0){
					cout<<"Stack is empty"<<endl;	
					}
					
					else {
					i--;
					cout<<"Pos"<<i<<"has removed "<<arr[i];
					}arr[i]=-999;
				break;
			case 3:
			
				
				
				for(i=0;arr[i]!=-999;i++){
					cout<<" \t"<<arr[i];
					
				}
				if(i>SIZE-1){
				cout<<"Stack is full";
				}
			
				break;
			}
		}
		 
	}while (option<=3);
    



return 0;
}
