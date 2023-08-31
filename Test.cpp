#include <iostream>
using namespace std;
int main (){
double x;
int y;
double pay;
cout<<"Enter Weekly wage: ";
cin>>x;
		
		if (x>0&&x<69.23){
			pay==x*1;
			cout<<"Tax to be paid is "<<pay;
		}
		else if((x>69.24)&&(x<=346.15)){
			pay==(x*0.2)-13.85;
			cout<<"Tax to be paid is "<<pay;
		}		
		else if (x>346.16&&x<692.31){
			pay==x*0.25-31.15;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>692.32&&x<1153.85){
			pay==x*0.3-65.77;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>1153.86&&x<2307.69){
			pay==x*0.35-123.46;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>2307.7&&x<3461.54){
			pay==x*0.40-238.85;
			cout<<"Tax to be paid is "<<pay;
		}
		else if (x>3461.55&&x<4615.38){
			pay==x*0.45-411.92;
			cout<<"Tax to be paid is "<<pay;
		}
		else{
			pay==x*0.50-642.69;
			cout<<"Tax to be paid is "<<pay;
		}
return 0;
}

