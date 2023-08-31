#include <iostream>

using namespace std;

int main(){
	cout<<"\tStrings"<<endl<<endl;
	
	char word[26], temp[26], check; 
	int i,j,count =0, counter=0, countr[26];
	
	cout<<"Enter your string: ";
	cin>>word;
	
	cout<<endl<<"1. Displaying full string: "<<word<<endl;
	cout<<"2. Displaying third letter of "<<word<<": "<<word[2]<<endl;
	
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
	
	for (i=0; i<26 && word[i] != '\0'; i++){
		int found = 0;
		
		for (j=0; j < i ; j++){
			if ( word[i] == temp[j] ){
				found = 1;
			}
		}
		if ( !found ){
			temp[j] = word[i];
		}
	}
	cout<<endl<<temp<<endl;
	/*
	for (i=0; i<26 && word[i] != '\0'; i++){
		for (j=0; j<i; j++){
				
		}
		cout<<word[i]<<" appears "<<countr[i]<<endl;	
	}8?
	
	
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
