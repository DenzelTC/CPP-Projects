#include <iostream>
using namespace std;
int main (){
char c;
int n;
cout<<"\t\t\tDatatype verifier"<<endl
<<"Enter n -";
cin>>n;
cout<<"Enter c -";
cin>>c;
n%2==0?cout<<n<<" is even"<<endl:cout<<n<<" is not even "<<endl;
n%2==1&&n%2>0?cout<<n<<" is odd and positive"<<endl:cout<<n<<" is not odd and postive"<<endl;
n%2==0&&n<0?cout<<n<<" is even and negative"<<endl<<endl:cout<<n<<" is not even and negative"<<endl<<endl;

(c>=49&&c<=58)?cout<<c<<"  is a digit"<<endl:cout<<c<<"  is not a digit"<<endl;
(c>=65&&c<=123)?cout<<c<<" is a letter"<<endl:cout<<c<<"  is not a letter"<<endl;



return 0;
}
