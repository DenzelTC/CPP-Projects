#include <iostream>
using namespace std;
int main (){
int a,b,c,d,e,f,g,h,i,j;
a=sizeof (char);
b= sizeof (char);
c=sizeof (short);
d=sizeof (long);
e=sizeof (int);
f=sizeof (float);
g=sizeof (double);
h=sizeof (1.55);
i=sizeof (1.55L);
j=sizeof ("Hello");
cout<<"\t\t\tProgram displays the size"<<endl<<endl;
cout<<"Size of character is "<<a<<endl
<<"Size of character pointer is "<<b<<endl
<<"Size of short is "<<c<<endl
<<"Size of long is "<<d<<endl
<<"Size of int is "<<e<<endl
<<"Size of float is "<<f<<endl
<<"Size of double is "<<g<<endl
<<"Size of 1.55 is "<<h<<endl
<<"Size of 1.55L is "<<i<<endl
<<"Size of Hello is "<<j;

return 0;
}
