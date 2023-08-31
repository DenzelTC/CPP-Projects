#include <iostream>
using namespace std;
int main (){
float x;
float pay;
int selection;
cout<<"The Program calculates Tax to be paid by an Individual"<<endl
<<"Select time interval of payment"<<endl
<<"1.Daily"<<endl
<<"2.Weekly "<<endl
<<"3.Fortnightly"<<endl
<<"4.Monthly "<<endl
<<"5.Annualy"<<endl;
cin>>selection;
switch (selection){


		case 1:
		cout<<"Enter Amount: ";
		cin>>x;
		
		if (x>0&&x<9.86){
			pay=x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if(x>9.87&&x<=49.32){
			pay=x*0.2-1.97;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>49.33&&x<98.63){
			pay==x*0.25-4.44;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>98.64&&x<164.38){
			pay=x*0.3-9.37;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>164.39&&x<328.77){
			pay==x*0.35-17.59;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>328.78&&x<493.15){
			pay=x*0.40-34.03;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>493.16&&x<657.13){
			pay=x*0.45-58.68;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay=x*0.50-91.56;
			cout<<"Tax to be paid is "<<pay;
		}
		break;
		
		case 2:
		cout<<"Enter Weekly wage: ";
		cin>>x;
		
		if (x>0&&x<69.23){
			pay=x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if(x>69.24&&x<346.15){
			pay=x*0.2-13.85;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>346.16&&x<692.31){
			pay=x*0.25-31.15;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>692.32&&x<1153.85){
			pay=x*0.3-65.77;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>1153.86&&x<2307.69){
			pay=x*0.35-123.46;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>2307.7&&x<3461.54){
			pay=x*0.40-238.85;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>3461.55&&x<4615.38){
			pay=x*0.45-411.92;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay=x*0.50-642.69;
			cout<<"Tax to be paid is "<<pay;
		}
		break;
		
		case 3:
		cout<<"Enter Fortnightly wage: ";
		cin>>x;
		
		if (x>0&&x<138.46){
			pay=x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if(x>138.47&&x<692.31){
			pay=x*0.2-27.69;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>692.32&&x<1384.62){
			pay=x*0.25-62.31;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>1384.63&&x<2307.69){
			pay=x*0.3-131.54;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>2307.70&&x<4615.38){
			pay==x*0.35-246.92;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>4615.39&&x<6923.08){
			pay=x*0.40-477.69;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>6923.09&&x<9230.77){
			pay=x*0.45-823.85;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay=x*0.50-1285.38;
			cout<<"Tax to be paid is "<<pay;
		}
		break;		
		
		case 4:
		cout<<"Enter Monthly Salary: ";
		cin>>x;
		
		if (x>0&&x<300){
			pay=x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if(x>300.01&&x<1.500){
			pay=x*0.2-60;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>1500.01&&x<3000){
			pay=x*0.21-135;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>3000.01&&x<5000){
			pay=x*0.3-285;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>5000.01&&x<10000){
			pay=x*0.35-535;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>10000.01&&x<15000){
			pay=x*0.40-1035;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>15000.01&&x<20000){
			pay=x*0.45-1785;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay=x*0.50-2785;
			cout<<"Tax to be paid is "<<pay;
		}
		break;
		
	 	case 5:
		cout<<"Enter Annual income: ";
		cin>>x;
		
		if (x>0&&x<3600){
			pay=x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if(x>3601&&x<18000){
			pay=x*0.2-720;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>18001&&x<36000){
			pay=x*0.25-1620;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>36001&&x<60000){
			pay=x*0.3-3420;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>60001&&x<120000){
			pay=x*0.35-6420;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>120001&&x<180000){
			pay=x*0.40-12420;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>180001&&x<240000){
			pay=x*0.45-21420;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay=x*0.50-33420;
			cout<<"Tax to be paid is "<<pay;
		}
}

		
return 0;
}

