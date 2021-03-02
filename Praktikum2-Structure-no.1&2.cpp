#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct x {
	
	char nama[6];
	char stat[3];
	int kode;
	};

struct y {
	
	char nama[20];
	float harga;
	};

int main(){
	
	int pembeli, barang;
	x *ptr, d;
	ptr = &d;
	
	
	
	//PENYIMPANAN DATA

	struct x pbl1 = {"Diana", "M", "P001"};
	struct x pbl2 = {"Rina", "M", "P002"};
	struct x pbl3 = {"Lina", "BM", "P003"};
	struct x pbl4 = {"Doni", "BM", "P004"};
	struct x pbl5 = {"Dodi", "M", "P005"};
	
	struct y brg1 = {"Pensil", 2000};
	struct y brg2 = {"Buku Tulis", 3500};
	struct y brg3 = {"Penghapus", 1000};
	struct y brg4 = {"Penggaris", 1500};
	struct y brg5 = {"Ballpoint", 2500};
	
	
	//INPUT

	cout<< "Masukkan Kode Pembeli: ";
	cin>> pembeli;
	cout<< endl;
	cout<< endl;
	
	cout<< "Masukkan Kode Barang: ";
	cin>> barang;
	cout<< endl;
	cout<< endl;
	
	
	
	
	
	//PEMBELI 1
	
	if (pembeli = 1){
		
		cout<< " Nama Pembeli  : "<< pbl1.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl1.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 1){
			
			cout<< " Nama Barang : "<< brg1.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg1.harga;
			cout<<endl;
			}	
		}
		
	if (pembeli = 1){
		
		cout<< " Nama Pembeli  : "<< pbl1.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl1.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 2){
			
			cout<< " Nama Barang : "<< brg2.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg2.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 1){
		
		cout<< " Nama Pembeli  : "<< pbl1.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl1.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 3){
			
			cout<< " Nama Barang : "<< brg3.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg3.harga;
			cout<<endl;
			}
		}
		
		
	if (pembeli = 1){
		
		cout<< " Nama Pembeli  : "<< pbl1.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl1.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 4){
			
			cout<< " Nama Barang : "<< brg4.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg4.harga;
			cout<<endl;
			}
		}	
		
	if (pembeli = 1){
		
		cout<< " Nama Pembeli  : "<< pbl1.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl1.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 5){
			
			cout<< " Nama Barang : "<< brg5.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg5.harga;
			cout<<endl;
			}
		}	
	
	
	
	
	
		
	//PEMBELI 2
	
	if (pembeli = 2){
		
		cout<< " Nama Pembeli  : "<< pbl2.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl2.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 1){
			
			cout<< " Nama Barang : "<< brg1.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg1.harga;
			cout<<endl;
			}	
		}
		
	if (pembeli = 2){
		
		cout<< " Nama Pembeli  : "<< pbl2.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl2.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 2){
			
			cout<< " Nama Barang : "<< brg2.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg2.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 2){
		
		cout<< " Nama Pembeli  : "<< pbl2.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl2.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 3){
			
			cout<< " Nama Barang : "<< brg3.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg3.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 2){
		
		cout<< " Nama Pembeli  : "<< pbl2.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl2.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 4){
			
			cout<< " Nama Barang : "<< brg4.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg4.harga;
			cout<<endl;
			}
		}	
		
	if (pembeli = 2){
		
		cout<< " Nama Pembeli  : "<< pbl2.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl2.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 5){
			
			cout<< " Nama Barang : "<< brg5.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg5.harga;
			cout<<endl;
			}
		}	
		
		
		
		
	//PEMBELI 3
	
	if (pembeli = 3){
		
		cout<< " Nama Pembeli  : "<< pbl3.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl3.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 1){
			
			cout<< " Nama Barang : "<< brg1.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg1.harga;
			cout<<endl;
			}	
		}
		
	if (pembeli = 3){
		
		cout<< " Nama Pembeli  : "<< pbl3.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl3.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 2){
			
			cout<< " Nama Barang : "<< brg2.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg2.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 3){
		
		cout<< " Nama Pembeli  : "<< pbl3.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl3.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 3){
			
			cout<< " Nama Barang : "<< brg3.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg3.harga;
			cout<<endl;
			}
		}
			
	if (pembeli = 3){
		
		cout<< " Nama Pembeli  : "<< pbl3.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl3.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 4){
			
			cout<< " Nama Barang : "<< brg4.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg4.harga;
			cout<<endl;
			}
		}	
		
	if (pembeli = 3){
		
		cout<< " Nama Pembeli  : "<< pbl3.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl3.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 5){
			
			cout<< " Nama Barang : "<< brg5.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg5.harga;
			cout<<endl;
			}
		}	
	
	
	
	
	
	
	//PEMBELI 4
	
	if (pembeli = 4){
		
		cout<< " Nama Pembeli  : "<< pbl4.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl4.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 1){
			
			cout<< " Nama Barang : "<< brg1.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg1.harga;
			cout<<endl;
			}	
		}
		
	if (pembeli = 4){
		
		cout<< " Nama Pembeli  : "<< pbl4.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl4.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 2){
			
			cout<< " Nama Barang : "<< brg2.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg2.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 4){
		
		cout<< " Nama Pembeli  : "<< pbl4.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl4.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 3){
			
			cout<< " Nama Barang : "<< brg3.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg3.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 4){
		
		cout<< " Nama Pembeli  : "<< pbl4.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl4.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 4){
			
			cout<< " Nama Barang : "<< brg4.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg4.harga;
			cout<<endl;
			}
		}	
		
	if (pembeli = 4){
		
		cout<< " Nama Pembeli  : "<< pbl4.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl4.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 5){
			
			cout<< " Nama Barang : "<< brg5.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg5.harga;
			cout<<endl;
			}
		}	
		
		
		
		
		
	//PEMBELI 5	
		
	if (pembeli = 5){
		
		cout<< " Nama Pembeli  : "<< pbl5.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl5.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 1){
			
			cout<< " Nama Barang : "<< brg1.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg1.harga;
			cout<<endl;
			}	
		}
		
	if (pembeli = 5){
		
		cout<< " Nama Pembeli  : "<< pbl5.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl5.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 2){
			
			cout<< " Nama Barang : "<< brg2.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg2.harga;
			cout<<endl;
			}
		}
		
	if (pembeli = 5){
		
		cout<< " Nama Pembeli  : "<< pbl5.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl5.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 3){
			
			cout<< " Nama Barang : "<< brg3.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg3.harga;
			cout<<endl;
			}
		}
		
		
	if (pembeli = 5){
		
		cout<< " Nama Pembeli  : "<< pbl5.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl5.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 4){
			
			cout<< " Nama Barang : "<< brg4.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg4.harga;
			cout<<endl;
			}
		}	
		
	if (pembeli = 5){
		
		cout<< " Nama Pembeli  : "<< pbl5.nama;
		cout<< endl;
		cout<< " Status Pembeli: "<< pbl5.stat;
		cout<< endl;
		cout<< endl;
		
		if (barang = 5){
			
			cout<< " Nama Barang : "<< brg5.nama;
			cout<< endl;
			cout<< " Harga Barang: "<< brg5.harga;
			cout<<endl;
			}
		}		
		
		

	
	return 0;
}
