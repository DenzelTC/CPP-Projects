#include <iostream>
using namespace std;

int main(){
	cout<<"\tStrings"<<endl<<endl;
	
	char word[26];
	char temp[26];
	int i,  counter[26];
	
	cout<<"Enter your string: ";
	cin>>word;
	
	cout<<endl<<"1. Displaying full string: "<<word<<endl;
	for (i=0; i<26 && word[i] != '\0'; i++){
		if (word[i] == temp[i]){
		counter[i] +1;
		}
	}
	
	
	cout<<word[i]<<"appears"<<counter[i];
	
	return 0;
}
