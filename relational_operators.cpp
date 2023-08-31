#include <iostream>
using namespace std;
int main (){
int num1,num2,result;
cout<<"Program shows the function of Relational Operators"<<endl
<<"Enter the 2 number to be compared "<<endl;
cin>>num1>>num2;
cout<<num1<<">"<<num2<< "-"<< (num1>num2)<<endl
<<num1<<"<"<<num2<< "-"<< (num1<num2)<<endl
<<num1<<"=="<<num2<< "-"<< (num1==num2)<<endl
<<num1<<"!="<<num2<< "-"<< (num1!=num2)<<endl
<<num1<<">="<<num2<< "-"<< (num1>=num2)<<endl
<<num1<<"<="<<num2<< "-"<< (num1<=num2)<<endl;

return 0;
}
