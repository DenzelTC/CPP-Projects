#include<iostream>
#include<cstring>

using namespace std;
 	class Complex{
 		int real;
 		int imaginary;
 		
 		public:
 			
	 		Complex(){
			 };
	 		Complex(int r,int i){
	 			real=r;
	 			imaginary=i;
			 };
	 			
	 		void display();
	 		Complex subt(Complex number){
	 			Complex subtract;
	 			subtract.real=real-number.real;
	 			subtract.imaginary=imaginary-number.imaginary;
	 			return subtract;
			 };
 		
 	};
 	
 	void Complex::display(){
 		cout<<"The complex number is "<<real ;
 		
 		if (imaginary>=0){
 		cout<<"-";
		 }

		cout<<""<<imaginary<<"i "<<endl;
	 }


int main(){
	
	
	Complex x(0,0);
	Complex y(0,0);
	Complex z(4,0);
	x.display();
	y.display();
	z=x.subt(y);
	

	z.display();
}
