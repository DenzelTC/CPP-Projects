#include<iostream>
#include<stdlib.h>
using namespace std;
 	class Rectangle{
 		int length;
 		int width;
 		
 		public:
 		void input(){
 			cout<<"Enter the length of the rectangle - ";
 			cin>>length;
 			cout<<"\nEnter the width of the rectangle - ";
 			cin>>width;
		 };
		 
 		int calc_area();
 		int calc_peri();
 		void display();
 	};
 	
 		int Rectangle::calc_area(){
 			return length*width;
		 } 
		
		int Rectangle::calc_peri(){
 			return 2*(length+width);
		 } 
		
		void Rectangle::display(){
		cout<<"The area of a Rectangle who's length is  "<<length<<" and width "<<width<<" is "<<calc_area()<<endl
		<<"The perimeter of a Rectangle who's length is  "<<length<<" and width "<<width<<" is "<<calc_peri()<<endl;
		} 
		
int main(){
	Rectangle aRectangle;
	aRectangle.input();
	aRectangle.display();
return 0;	
}		
