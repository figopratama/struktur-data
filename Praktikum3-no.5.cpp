#include <iostream>
using namespace std

class Queue{
	private:
		int front;
		int rear;
		int arr[MAX];
		int nrp;
		char nama;
		float nilai;
		
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
		

	//MENAMPILKAN
void display(){
	for(int i = 0;i<5;i++){
		cout<< arr[i]<<"  ";
		}
	}
		
	//MENU
int main(){
	
	Queue q1;
	int option,value;

	do{
		cout<< endl;
		cout<< endl;
		cout<< "	SELECT YOUR OPERATION"<< endl;
		cout<< "	Enter 0 to exit"<< endl;
		cout<< "			Enter the number => ";
		cin>> option;
		cout<< "Masukkan NRP   = ";
		cin>> nrp;
		cout<< "Masukkan Nama  = ";
		cin>> nama;
		cout<< "Masukkan Nilai = ";
		cin>> nilai;
		cout<< endl;
		cout<< endl;

//switch case
		if{
				cout<< "Input Data"<< endl;
				cout<< "Input Data -> ";
				cin>> value;
				q1.enqueue(value);
				cout<< endl;
				cout<< "========================================================";	
				cout<<"OUTPUT DATA"<<endl;
				cout<<"Urutan Berdasarkan Nilai Tertinggi"
				q1.display();
				cout<< endl;
		}

	} while(option!=0);
	
	return 0;
}
