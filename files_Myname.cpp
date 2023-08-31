#include<iostream>
#include<cstring>
#include <fstream>
using namespace std;
int main(){
	char name[20];
	cin.getline(name, 20);
	ofstream out;
	out.open ("myname.txt",ios::app);
	//out<<name<<endl;
	cin>>name;
	out.close(); 
	

	
return 0;	
}
