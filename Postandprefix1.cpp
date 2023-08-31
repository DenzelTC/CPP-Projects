#include <iostream>
using namespace std;
int main (){
int a,b;
a=5 ,b=a++;
cout<<"Program shows difference between post and prefix"<<endl
<<"Postfix - a is added with 1 after it is already assigned to b"<<endl
<<"b = "<<b<<endl
<<"Prefix - a is added with 1 before it is assigned to b"<<endl;
a= 5, b=++a;
cout<<"b ="<<b;
return 0;
}
