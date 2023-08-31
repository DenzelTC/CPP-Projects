#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main() {
    int num, choice;
    int stack[8];
    int place = 0;
    int exit = 1;

    cout << "Show tickets program";
    do {
        cout << "\n\n Main Menu";

        cout << "\n1.Admit \n2.Refund ";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                if (place == 8)
                    cout << "\nAuditorium is Full!";
                else {
                    cout << "\nEnter Ticket number : ";
                    cin>>num;
                    cout << "\nPosition : " << place << ", Ticket number :" << num;
                    stack[place++] = num;
                }
                break;
            case 2:
                if (place == 0)
                    cout << "\nAuditorium  is Empty!";
                else {
                    --place;
                    cout << "\nPosition : " << place << ", Refunded ticket :" << stack[place];
                }
                break;
    	}
	}while (exit);
return 0;
}
