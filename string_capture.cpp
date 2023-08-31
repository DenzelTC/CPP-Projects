#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
char str[25];
int count=0;
int i;
cout<<" \t\t Program captures a  string and displays it"<<endl<<endl
<<"Enter name:  ";
cin>>str;
cout<<"1:Displaying Full name"<<endl
<<"My name is "<<str<<endl<<endl
<<"2:Displaying third letter"<<endl
<<"Third letter is  "<<str[2]<<endl<<endl
<<"3:Displaying letters individually"<<endl;

for(i=0;i<=25&&str[i]!='\0';i++){
	cout<<"\t"<<str[i];
}cout<<""<<endl;
cout<<"4:Displaying name in reverse order"<<endl;
for(i=5;i>=-1;i--){
	cout<<" \t"<<str[i];
}
cout <<"\n5: Displaying number of letters in the string"<<endl;
for(i=0;i<=25&&str[i]!='\0';i++){
	count++;
}
cout<<"Number of letters in the string - "<<count
<<"\n6: Change letter cases"<<endl;
for(i=0;i<=25;i++){

	if(str[i]>=65&&str[i]<=91){
		str[i]+=32;
	}
	else if (str[i]>=97&&str[i]<=123){
		str[i]-=32;
	}
	else {
		
	}

}cout<<""<<str;











return 0;
}
