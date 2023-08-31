#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main() {
    int place, choice;
    int queue[5];
    int rear = 0;
    int front = 0;
    int exit = 1;

    cout << "\nSTEWARD BANK QUEUE SYSTEM"<<endl<<endl;
    do {
        cout << "\nMain Menu";

        cout << "\n1.Add \n2.Remove ";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                if (rear == 5)
                    cout << "<<\nQueue Reached Max!!";
                else {
                    cout << "\nEnter The Card number : ";
                    cin>>place;
                    cout << "<<\nPosition : " << rear + 1 << " , Card  : " << place;
                    queue[rear++] = place;
                }
                break;
            case 2:
                if (front == rear)
                    cout << "\nQueue is Empty!";
                else {
                    cout << "\nPosition : " << front << " , Removed Card number  :" << queue[front];
                    front++;
                }
                break;
    	}
    }while (exit);
return 0;
}
