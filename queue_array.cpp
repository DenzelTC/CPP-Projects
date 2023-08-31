#include <iostream>
#include<queue>
using namespace std;

int main() {
const int SIZE=5;
int arr[SIZE]={-999,-999,-999,-999,-999};//,-999,-999,-999,-999,-999};
unsigned int option;
int i,exit=1;
cout<<"Queue"<<endl;
	do{
		cout<<"\n1.....Join queue\n2.... Service\n3.....List"<<endl;
		cin>>option;
		switch(option){
			case 1:
				i=0;
				while(arr[i]!=-999&&i!=SIZE){
					cout<<"pos "<<i<<endl;
					i++;
				}
				
				if(i>SIZE-1){
					cout<<"Queue is full";
					
				}
				else{
				
				if (i==0){
					cout<<"Queue is empty"<<endl;
				}
				
				cout<<"Generate ticket number ";
				cin>>arr[i];
				}
				
				break;
				
			case 2:
				i=0;
				while(arr[i]!=-999&&i!=SIZE){
					arr[i]=arr[i+1];
					i++;
				}
				arr[i]=-999;
				break;
			case 3:
				if (arr[0]=-999){
					cout<<"Queue is empty";
				}
				else{
				
				
				for(i=0;arr[i]!=-999;i++){
					cout<<" \t"<<arr[i];
					
				}
				if(i>SIZE-1){
				cout<<"Queue is full";
				}
			}
				break;
		} 
	}while (option<=3);
    



return 0;
}
