#include <iostream>
using namespace std;
int main (){
	int f,result;
	cout<<"				Temperature Converter\n\n"
	<<"enter Fahrenheit value:.....";
	cin>>f;
	result=(double)5/9*(f-32);
	cout<<"			* * * * * * * * * * *"<<endl
 	<<""<<f<<" fahrenheit =	"	 <<""<<result<<" degrees celcius"<<endl;
 	cout<<"			* * * * * * * * * * *";
	return 0;
}
