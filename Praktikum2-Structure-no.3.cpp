#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct x {
	
	char nama[6];
	char stat[3];
	};

struct y {
	
	char nama[20];
	float harga;
	};

int main(){
	
	int pembeli, barang, totalbrg1, totalbrg2;
	x *ptr, d;
	ptr = &d;
	
	
	
	//PENYIMPANAN DATA

	struct x pbl1 = {"Diana", "M"};
	struct x pbl2 = {"Rina", "M"};
	struct x pbl3 = {"Lina", "BM"};
	struct x pbl4 = {"Doni", "BM"};
	struct x pbl5 = {"Dodi", "M"};
	
	struct y brg1 = {"Pensil", 2000};
	struct y brg2 = {"Buku Tulis", 3500};
	struct y brg3 = {"Penghapus", 1000};
	struct y brg4 = {"Penggaris", 1500};
	struct y brg5 = {"Ballpoint", 2500};
	
	//PENGHITUNGAN TOTAL BARANG
	totalbrg1 = 2*brg1.harga;
	totalbrg2 = 2*brg2.harga;
	
	//PENDATAAN
	cout<< "BRG001"<< "		"<< brg1.nama<< "		2"<< "		"<< brg1.harga<< "		"<< totalbrg1;
	cout<< endl;
	cout<< "BRG002"<< "		"<< brg2.nama<< "	2"<< "		"<< brg2.harga<< "		"<< totalbrg2;
	
}
