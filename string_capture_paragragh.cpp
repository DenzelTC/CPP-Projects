#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
char str[25];
int count=0;
int i;
int choice;
int exit;
char word,wrd,found;

cout<<" \t\t Program captures a  string and displays it"<<endl<<endl;
do{
cout<<"1.Type paragraph"<<endl
<<"2.Display"<<endl
<<"3.Replace word"<<endl<<endl
<<"Enter choice - "<<endl;
cin>>choice;
	switch (choice){
		case 1:
			cout<<"Type paragraph"<<endl;
			for(i=0;i<5;i++){
			cin.getline(str, 100);
			}
			break;
			
		case 2:
			//for (i=0;i<5;i++){
				cout<<" "<<str;
			//}
			break;
	
		case 3:
			cout<<"Enter word to be replaced"<<endl;
			cin>>wrd;
			
			if (str[i]!=wrd){
				cout<<"Word "<<"' "<<wrd<<"'"<<"was not found";
			}
			else if(str[i]==wrd){
				cout<<"Enter word to be replaced with"<<endl;
				cin>>word;
				str[i]=found;
				found=word;
				cout<<""<<str[i]<<"was replaced with - "<<word<<endl<<endl;
				for (i=0;i<5;i++){
				cout<<" "<<str[i];
				}
				 
			}
			else{}
			break;
	}	
}while(choice<=3);
 


return 0;
}
