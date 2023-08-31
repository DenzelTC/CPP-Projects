#include<iostream>
#include<cstring>
#include <fstream>
using namespace std;
int main(){	
char name[100];
int i;
char line [40];
char firstname[20];
char surname[20];


	ifstream fin;
	fin.open ("myname.txt");
	while (!fin.eof()){
	fin.getline(firstname, 20,' ');
	cout<<""<<firstname<<endl;
	}
	fin.close(); 
	
 

return 0;
}
