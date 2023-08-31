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
for(i=0;i<=25&&str[i]!='\0';i++){
	if(str[0]==str[1]){
	count++;
	}

	cout<<"\t"<<str[i];
}cout<<""<<endl;

cout<<""<<count;




return 0;
}
