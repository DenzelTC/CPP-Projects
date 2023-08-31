#include<iostream>
#include<cstring>
#include <fstream>
using namespace std;
	class Student{
		char name[100];
		char course[100];
		char address[100];
		int id;
		int age;
	
		
		public:
		Student(){
			cout<<"\nEnter I.D number - ";
			cin>>id;
			cout<<"\nEnter Age - ";
			cin>>age;
			cin.ignore(100,'\n');
			cout<<"Enter Name - ";
			cin.getline(name, 100);
			cin.ignore(100,'\n');
			cout<<"\nEnter Course - ";
			cin.getline(course, 100);
			cin.ignore(100,'\n');
			cout<<"\nEnter Address - ";
			cin.getline(address, 100,'\n');
			
		
		
			
			};
			
			void store(){
				
				ofstream students;
				students.open ("Students.txt",ios::app);
				students<<""<<id<<"\t"<<name<<"\t"<<course<<"\t"<<age<<"\t"<<address<<endl;
				students.close();
			};
			
			
				
		
		
	};
	
	
		/*void display(){
			int i;
			for (i=0;i<5;i++){
				cout<<"I.D - "<<id<<"\tName - "<<name<<"\tCourse - "<<course<<"\tAge - "<<age<<"\tAddress - "<<address<<endl;
			}*/			
	
void menu(){
	int option;
	int i;
	char choice='Y';
	cout<<"\t\t\tStudent Registry"<<endl<<endl;
	do{
	
		cout<<"1. Add  Student"<<endl
		<<"2. View Student"<<endl;
		cin>>option;
		switch (option){
		 	
		 	case 1:
		 	//for(i=0;i<5;i++){
			Student a;
			a.store();	 	
			
			break;
			//}
			
			/*case 2:
			display();*/	
		 	
		 }
	cout<<"\nReturn to Main Menu (Y/N)";
	cin>>choice;
	}while (choice=='Y'||choice=='y');
	
	
}	
	
	


int main(){

menu();	
	
return 0;	
}
