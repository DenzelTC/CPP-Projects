#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {

int avAmnt;
double pcntg;
double prof;
double lotsize;

int numofpips,tkprof,numofpos;
double nSize;

int cc; //checks if there's a decimal value

cout<<"Enter available amount "<<endl;
cin>>avAmnt;

cout<<"Enter profit percentage"<<endl;
cin>>pcntg;


prof=avAmnt * (pcntg/100);

cout<<" profit - $"<<prof<<endl;

		if (prof<=50){
			numofpips= prof/0.1;
			
			cout<<"Enter take profit(minimum number of pips)"<<endl;
			cin>>tkprof;
			
			numofpos= numofpips/tkprof;
			nSize=0.01;
		
		
			
			cc=prof-numofpos;
				cout<<"ffffff"<<cc;
				
				
			if (cc>0){		//checks if there's a decimal value
				numofpos+1;//adds an extra position to compensate
			}
			
			cout<<"**************************************************************************************************"<<endl
				<<"**************************************************************************************************"<<endl;
	
			
			cout<<"\t\t\tMaximum number of positions data"<<endl
				<<"\t\tbuy/sell "<<numofpos<<" position(s) "<<endl
				<<"\t\tLot size of - "<<nSize<<endl
				<<"\t\tTake Profit - "<<tkprof<<endl;
			
			
				
		}
		else if (prof>50&&prof<=999){
			numofpips= prof/1;
			
			cout<<"Enter take profit(minimum number of pips)"<<endl;
			cin>>tkprof;
			
			numofpos= numofpips/tkprof;
			nSize=0.1;
			
			cout<<"**************************************************************************************************"<<endl
				<<"**************************************************************************************************"<<endl;
			
			cout<<"\t\t\tMaximum number of positions data"<<endl
				<<"\t\tbuy/sell "<<numofpos<<" position(s) "<<endl
				<<"\t\tLot size of - "<<nSize<<endl
				<<"\t\tTake Profit - "<<tkprof<<endl;
				
				
		}
		
		else {
			numofpips= prof/10;
			
			cout<<"Enter take profit(maximum number of pips)"<<endl;
			cin>>tkprof;
			
			numofpos= numofpips/tkprof;
			nSize=1;
			
			cout<<"**************************************************************************************************"<<endl
				<<"**************************************************************************************************"<<endl;
			
			cout<<"\t\t\tMaximum number of positions data"<<endl
				<<"\t\tbuy/sell "<<numofpos<<" position(s) "<<endl
				<<"\t\tLot size of - "<<nSize<<endl
				<<"\t\tTake Profit - "<<tkprof;
		}



return 0;
}
