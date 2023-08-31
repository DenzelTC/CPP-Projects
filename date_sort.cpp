#include <iostream>
using namespace std;
int main (){
int dd,month,yy;
int choice;
cout<<"The program displays date"<<endl<<endl
<<"Enter Day - ";
cin>>dd;
cout<<"Enter Month - ";
cin>>month;
cout<<"Enter Year - ";
cin>>yy;
cout<<""<<endl<<endl<<endl;
switch(month){



	case 1:
		if(dd<=31){
		cout<<"\t\tJanuary"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 2:
		if(dd<=28){
		cout<<"\t\tFebruary"<<" "<<dd<<", "<<yy<<endl;
		}
	   	else if(dd<=29&&yy%4==0){
			cout<<"\t\tFebruary"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 3:
		if(dd<=31){
		cout<<"\t\tMarch"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 4:
		if(dd<=30){
		cout<<"\t\tApril"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 5:
		if(dd<=31){
		cout<<"\t\tMay"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 6:
		if(dd<=30){
		cout<<"\t\tJune"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 7:
		if(dd<=31){
		cout<<"\t\tJuly"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 8:
		if(dd<=31){
		cout<<"\t\tAugust"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 9:
		if(dd<=30){
		cout<<"\t\tSeptember"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 10:
		if(dd<=31){
		cout<<"\t\tOctober"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 11:
		if(dd<=30){
		cout<<"\t\tNovember"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
		
	case 12:
		if(dd<=31){
		cout<<"\t\tDecember"<<" "<<dd<<", "<<yy<<endl;
		}
		else{
			cout<<"\t\tInvalid date"<<endl;
		}
		break;
}

return 0;
}
