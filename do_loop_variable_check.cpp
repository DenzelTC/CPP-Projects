#include <iostream>
using namespace std;
int main (){
int number;
int type;
char x;
cout<<"Program determines type of variable entered "<<endl<<endl;
do 
	{
		cout<<"Enter Variable: ";
		cin>>x;
		if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='O'||x=='o'||x=='I'||x=='u'||x=='U'){
			type=1;
		}
		else if(x>=48&&x<=57){
			type=2;
		}
		else {
			type=3;	
		}
			switch(type){
			case 1:
				cout<<"Variable entered "<<x <<" is a vowel"<<endl<<endl;
				break;
			case 2:
				cout<<"Variable entered "<<x <<" is an integer"<<endl<<endl;
				break;
			case 3:
				cout<<"Variable entered "<<x <<" is a non-vowel"<<endl<<endl;
				break;
			
			}
		number++;
	}while (number<=10);
return 0;
}
