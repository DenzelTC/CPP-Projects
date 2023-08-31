#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
const int ROWS=2,COLUMNS=2; 
int A[ROWS][COLUMNS];
int B[ROWS][COLUMNS];
int C[ROWS][COLUMNS];
int i;
int j,x;

cout<<"\t\t\t2 Dimensional Aays\n\n";
		for (i=0;i<ROWS;i++){
			for(j=0;j<COLUMNS;j++){
			cout<<"Enter element A["<<i+1<<" , "<<j+1<<"] - ";
			cin>>A[i][j];
			}
		}
			cout<<""<<endl<<endl;
		for (i=0;i<ROWS;i++){
			for(j=0;j<COLUMNS;j++){
			cout<<"Enter element B["<<i+1<<" , "<<j+1<<"] - ";
			cin>>B[i][j];
			}
		}
	cout<<""<<endl<<endl	
	<<"Enter number to multiplied by - ";
	cin>>x;	
	
	cout<<""<<endl<<endl;
	cout<<""<<x<<" A"<<endl;
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
		C[i][j]=A[i][j]*x;
		}
	}
	cout<<"A "<<endl;
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
				cout<<"\t "<<C[i][j];
		}
		cout<<""<<endl;
	}
	cout<<""<<endl<<endl;
	
	cout<<""<<endl<<endl;
	cout<<""<<x<<" B"<<endl;
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
		C[i][j]=B[i][j]*x;
		}
	}	
	cout<<"B"<<endl;	
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
				cout<<"\t "<<C[i][j];
		}
		cout<<""<<endl;	
	}
		
	cout<<"B"<<endl;	
	for (i=0;i<ROWS;i++){
				cout<<" "<<B[i][j];
		cout<<""<<endl;	
	}	
		
		
		
		
		
		
return 0; 
}
