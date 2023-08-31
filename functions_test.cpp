#include<iostream>
#include<stdlib.h>
using namespace std;
int A=1;
int test(){
int	B=2;
A=5;
cout <<" "<<A<<" "<<B/*<<""<<C*/;
}

int main(){
int a;
int b;
int C=3;
int D=4;
A=6;
test();
cout <<" "<<A/*<<" "<<B*/<<""<<D;
return 0;
}

