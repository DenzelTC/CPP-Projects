#include<iostream>
#include<cstring>

using namespace std;
 	class Shape{
 		int length;
 		int width;
 		char name[20];
 		
 		public:
 		void input(){
 			cout<<"Enter the length of the shape- ";
 			cin>>length;
 			cout<<"\nEnter the width of the shape - ";
 			cin>>width;
		 };
		 
 		int calc_area();
 		int calc_peri();
 		char* setname();
		void display();
 		
 	};
 	
 		int Shape::calc_area(){
 			return length*width;
		 } 
		
		int Shape::calc_peri(){
 			return 2*(length+width);
		 } 
		
		char* Shape::setname(){
		if (length==width){
		strcpy(name, "Square") ;
		}
		else{
		strcpy(name, "Rectangle");
		return name;
		}
		
		} 
		
		void Shape::display(){
		cout<<"The area of the "<<name<<" who's length is  "<<length<<" and width "<<width<<" is "<<calc_area()<<endl
		<<"The perimeter of the"<<name<<" who's length is  "<<length<<" and width "<<width<<" is "<<calc_peri()<<endl;
		} 
		
		
		
int main(){
	Shape aShape;
	aShape.input();
	aShape.setname();
	aShape.display();
return 0;	
}		
