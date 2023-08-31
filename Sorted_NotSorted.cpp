#include <iostream>
using namespace std;
int main (){
int x,y,z;
cout<<"\t\t\tProgram checks if numbers are sorted or not"<<endl<<endl
<<"Input the 3 numbers:...";
cin>>x>>y>>z;
z>y&&z>x&&y>x?cout<<"\t\t*Sorted*":cout<<"\t\t*Not Sorted*";
return 0;
}
