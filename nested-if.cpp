#include <iostream>
using namespace std;
int main (){
int x,pay;
cout<<"The program shows the function of the else-If statement by categorising numbers under 15"<<endl<<endl
<<"\t\tBelow 150 is $1.80/unit"<<endl<<"\t\tAbove 150unit and below 200units is $1.50/unit"<<endl<<"\t\tAbove 200units pay $1/unit"<<endl
<<"Enter Number :.....";
cin>>x;
if(x<150){
	pay=x*1.80;
	cout<<"The amount to be paid is "<<pay;
}
else if (x>150&&x<200){
	pay=x*1.5;
cout<<"The amount to be paid is "<<pay;
}
else if (x>200){
	pay=x*1;
	cout<<"The amount to be paid is "<<pay;
}
else{
	cout<<".";
}
return 0;
}
