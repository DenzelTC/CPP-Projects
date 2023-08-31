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


do{

cout<<"Enter starting amount "<<endl;
cin>>x;

cout<<"Enter number of days "<<endl;
cin>>y;



for (int i = 1; i<y; i++){
	prof = 0.20*x;
	prevprof=newprof;
 	
	x=prof+x;
	newprof= prevprof+prof;
	
	
//	if (i%5==0){
	
				cout<<"Trade "<<week<<" profit - $"<<newprof<<" new total - $"<<x<<endl;
	
				ofstream dayprof;
				dayprof.open ("tradingplan.txt",ios::app);
				dayprof<<"Trade "<<week<<" profit - $"<<newprof<<" new total - $"<<x<<endl;
				dayprof.close();
				week++;
				
				newprof=0;
		//	}
	
}//end of for loop

cout<<"Do you want to restart ?";

cin>>ans;

}while (ans=1);

//cout<<"New total is "<<x;     £ sign or € 
return 0; 
}//end of program




