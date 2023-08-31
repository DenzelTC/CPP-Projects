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
	
	
	
/*	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			
			for (i=0;i<ROWS;i++){
				for (j=0;j<COLUMNS;j++){
				C[i][j]=A[i][j]*B[i][j];
				}
			}

		}
	}
		cout<<""<<endl;	
	
	cout<<"A*B "<<endl;  
	for (i=0;i<1;i++){
		C[i][j]=A[i][j]*B[i][j];
		for (j=0;j<1;j++){
		C[i][j]=A[i][j]*B[i][j];
		}
	}     */
	
	
	
	cout<<"A*B "<<endl;
	for (i=0;i<ROWS;i++){
		for (j=0;j<COLUMNS;j++){
			C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[0][0];
			C[0][1]=A[0][0]*B[1][1]+A[0][0]*B[1][0];
			C[1][0]=A[1][0]*B[0][1]+A[1][1]*B[0][1];
			C[1][1]=A[1][0]*B[1][1]+A[1][1]*B[1][1];
			cout<<"\t "<<C[i][j];
		}
		cout<<""<<endl;
	}
		
		
		
		
		
		
return 0; 
}
