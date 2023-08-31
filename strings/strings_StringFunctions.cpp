#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main(){
	cout<<"\tStrings"<<endl<<endl;
	
	char word[26], nu[36],check; 
	int i,count =0, counter=0;
	//string word;
	cout<<"Enter your string: ";
	cin.getline(word, 26);
	
	cout<<endl<<"1. Displaying full string: "<<word<<endl;
	cout<<"2. Displaying third letter of "<<word<<": "<<word[2]<<endl;
	
	cout<<endl<<strtok(word, " ")<<endl<<endl;
	
	cout<<strstr(word,"a")<<endl;
	
	//cout<<endl<<word<<endl<<endl;
	
	
	cout<<"3. Spelling the string:\t ";
	for (i=0; i<26 && word[i] != '\0'; i++){
		cout<<word[i]<<"\t";
		count++;
	}

	cout<<endl;
	cout<<"4. Reverse spelling of the string: ";
	for (i=count; i >=0; i--){
		cout<<word[i]<<"\t";
	}
	
	cout<<endl<<"5. Length of string : "<<count<<endl;
	
	for (i=0; i<26 && word[i] != '\0'; i++){
	
		if(word[i] >=65 && word[i] <=90){
            word[i] += 32;
        }
        else if (word[i] >= 97 && word[i] <= 122){
        	word[i] -=32;
		}
	}
	cout<<"6. The string has been changed to: "<<word<<endl;
	/*
	cout<<endl<<"\tFrequency of Characters"<<endl<<endl;
	cout<<"Which letter do you want to check?: ";
	cin>>check;
	
	for (i=0; i<26 && word[i] != '\0'; i++){
		if (check == word[i]){
			counter++;
		}
	}
	cout<<"The characeter \'"<<check<<"\' appears "<<counter<<" times in "<<word;*/
	return 0;
}
