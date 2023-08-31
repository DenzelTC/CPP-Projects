#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
int i;
int num[5];
srand(time(NULL));
int luckynum=rand()%10+1;
cout<<"The program displays the numbers stored in an array"<<endl<<endl;

for(i=0;i<5;i++){
	cout<<"Enter number: ";
	cin>>num[i];
	if(num[i]==luckynum){
	cout<<" you have guessed right"<<endl;
	}
}
for (i=0;i<5;i++){
	cout<<" "<<luckynum;
}
return 0;
}
