#include <iostream>
using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[MAX];
		
	public:
		Queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<MAX;i++){
				arr[i]=0;
			}
		}
		bool isEmpty(){
			if(front==-1 && rear==-1)
				return true;
			else
				return false;
		}
		bool isFull(){
			if(rear==4)
				return true;
			else
				return false;
		}
		
		
		//ENQUEUE
		void enqueue(int val){
			if(isFull()){
				cout<<"Queue is FULL"<< endl;
				return;
			}
			else if(isEmpty()){
				rear = front = 0;
				arr[rear]=val;
			}
			else{
				rear++;
				arr[rear]=val;
			}
		}
		
		//MENGHITUNG
		int count(){
			return (rear-front+1);
		}
		
		//MENAMPILKAN
		void display(){
			cout<<"Isi Antrian adalah - ";
			for(int i = 0;i<5;i++){
				cout<< arr[i]<<"  ";
			}
		}
};

//MENU
int main(){
	
	Queue q1;
	int option,value;

	do{
		cout<< endl;
		cout<< endl;
		cout<< "	SELECT YOUR OPERATION"<< endl;
		cout<< "	Enter 0 to exit"<< endl;
		cout<< "		1. Input Data\n";
		cout<< "		2. Hitung Antrian\n";
		cout<< "		3. Tampilkan Data\n";
		cout<< "		4. Clear Screen\n\n";
		cout<< "			Enter the number => ";
		cin>> option;
		cout<< endl;
		cout<< endl;

//switch case
		switch (option){
			case 0:
				break;
			case 1:
				cout<< "Input Data"<< endl;
				cout<< "Masukkan Item untuk Operasi Enqueue -> ";
				cin>> value;
				q1.enqueue(value);
				cout<< endl;
				cout<< "========================================================";
				break;
			case 2:
				cout<< "Hitung Antrian"<< endl;
				cout<< "Jumlah Item yang ada dalam antrian : "<<q1.count()<<endl;
				cout<< endl;
				cout<< "========================================================";
				break;
			case 3:
				cout<<"Menampilkan Antrian"<<endl;
				q1.display();
				cout<< endl;
				break;
			case 4:
				system("cls");
				break;
			default:
				break;
		}

	} while(option!=0);
	
	return 0;
}
