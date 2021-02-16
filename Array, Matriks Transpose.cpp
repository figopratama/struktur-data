#include <iostream>
using namespace std;

int main(){
	
	int kolom[10];
	kolom[0] = 1;
	kolom[1] = 2;
	
	int baris [10];
	baris[0] = 3;
	baris[1] = 4;
	
	cout<< "Matriks anda = "<< endl;
	cout<< endl;
	cout<< kolom[0];
	cout<< kolom[1];
	cout<< endl;
	cout<< baris[0];
	cout<< baris[1];
	
	cout<< endl;
	cout<< endl;
	cout<< "Matriks Transpose anda = "<<endl;
	cout<< endl;
	cout<< kolom[0];
	cout<< baris[0];
	cout<< endl;
	cout<< kolom[1];
	cout<< baris[1];
	
	return 0;
}
