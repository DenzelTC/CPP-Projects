#include<iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main() {
double x;
int ans;
int y;
double total;
float newtot;
double prof;
double prevprof;
double newprof=0;
int week=1;

cout<<"Enter starting amount "<<endl;
cin>>x;

cout<<"Enter number of days "<<endl;
cin>>y;

for (int i = 1; i<y; i++){
	prof = 0.20*x;
	prevprof=newprof;
 	
	x=prof+x;
	newprof= prevprof+prof;
	
	

	
				cout<<"Trade "<<week<<" profit - $"<<newprof<<" new total - $"<<x<<endl;
	
				ofstream dayprof;
				dayprof.open ("tradingplan.txt",ios::app);
				dayprof<<"Trade "<<week<<" profit - $"<<newprof<<" new total - $"<<x<<endl;
				dayprof.close();
				week++;
				
				newprof=0;
	
	
}//end of for loop

return 0; 
}//end of program
