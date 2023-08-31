#include <iostream>
using namespace std;
int main (){
int a,b,c,d,e;
	a=5,b=4,c=0,d=0,e=0;
	c=a+b;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
	a=a+b;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
	a+=b;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
	a=a+1;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
	a=5;
	d=a++;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
	a=5;
	d=++a;
	cout<<"a"<<a <<"b"<<b <<"c"<<c <<"d"<<d <<"e"<<e<<endl;
return 0;
}

