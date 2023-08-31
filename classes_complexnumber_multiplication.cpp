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
	 		Complex mult(Complex number){
	 			Complex multi;
	 			multi.real=real*number.real;
	 			multi.imaginary=imaginary*number.imaginary;
	 			return multi;
			 };
 		
 	};
 	
 	void Complex::display(){
 		cout<<"The complex number is "<<real ;
 		
 		if (imaginary>=0){
 		cout<<"*";
		 }

		cout<<""<<imaginary<<"i "<<endl;
	 }


int main(){
	
	
	Complex x(5,2);
	Complex y(3,6);
	Complex z(4,0);
	x.display();
	y.display();
	//z.display();
	z=x.mult(y);
	

	z.display();
}
