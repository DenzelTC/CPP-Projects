#include<iostream>
#include<cstring>

using namespace std;
 	class Complex{
 		//public:
 		int real;
 		int imaginary;
 		
 		public:
 			void display();
	 		Complex(){
			 };
	 		Complex(int r,int i){ //complex is passed 2 parameter reprsenting real and imaginary 
	 		
	 			real=r;// real is assigned to int r 
	 			imaginary=i; //imaginary is assigned to int i in the parameters  
			 };
	 		
			
	 		Complex add(Complex number){ //'add' is created of type 'complex' which will responsible for the main calculation of the final addition of the 2 complx numbers  
	 			Complex sum; //complex 'sum' member function is called here
	 			sum.real=real+number.real; //
	 			sum.imaginary=imaginary+number.imaginary;//
	 			return sum; // returns final result as sum
	 		}
	 	
 		
 	};
 	
 	void Complex::display(){// member function display inthe class whicg will display the result is called here 
 		
 		
 		
 		if (real!=0){ 
	 	cout<<" "<<real;//if the real number is not  equal to '0' nothing will be displayed  
 		}
 		else{ 
 		cout<<"0 ";// if conditon is not satisfied a 'o' will be displayed
		 }
 	
 	
 		if (imaginary>0){
 		cout<<" +";// if imaginary value is greater than '0' a '+' sign will dispayed in between the real and the imaginary 
		 }
		
		if (imaginary>0){
		cout<<""<<imaginary<<"i ";// if imaginary is greater than '0' again the program wil display imaginary number and a letter "i" afterwards.
		}
	 }


	void calculator(Complex num1,char op,Complex num2){// stand alone function 'calculator' is created and passed "num1" and "num2" of type 'Complex' and "op" of character type. 
		Complex num3;// "num3" of type 'Compex is created.
		num1.display();// "num1" is displayed.
		cout<<""<<op;//character "op" is displayed 
		num2.display();
		cout<<"=";
		if (op=='+'){
			num3=num1.add(num2);//if character "op" is "+" then num3 is num1 and add
		}
		num3.display();
		
	}
	
	
	void set(int &a, int &b){// stand alone function set is created and int a and int b passed by reference 
	 			char op;// character "op" is declared.  
				char i;// character "i" is declared. 
	 			
	 			cout<<"Enter the complex number in the format a+bi - "<<endl;
	 			cin>>a; //captured a
	 			cin>>op;// capture op
	 			cin>>b;//capteure b
	 			cin>>i;//capture i 
	 			if (op=='-'){
	 				b*=-1; //if op is "-" b is -1 
				 }
	}

	void prompt (){// stand alone to summarize the program 
		cout<<"\t\tThis program adds two complex numbers and displays result"<<endl<<endl;
	}
    void cmplx(){
    	char repeat='Y';
    	while(repeat=='Y'||repeat=='y'){
	
		int a;// int a is declared in main which will receive returned value in other function
		int b;// int b is declared in main which will receive returned value in other function
		char op;// character "op" will be passed with the operator sign 
		
		set(a,b); // stand alone function set is called and passed a and b to receive the values 
		
		
		Complex x(a,b);
		cin>>op; // op is catured 
		set(a,b);// stand alone function set is called again after operator is captured and passed a and b to receive the values
		Complex y(a,b);
		Complex num3;
		calculator(x,op,y);	
		cout<<"\n\nDo you want to do another calculation -  ";
		cin>>repeat;
		//getchar();
		}
	}
int main(){
	prompt();
	cmplx();
	
}
