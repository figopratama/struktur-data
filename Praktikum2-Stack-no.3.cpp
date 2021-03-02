#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#define MaxElemen 200 					
using namespace std;

struct Tumpukan{
 	char Isi[MaxElemen];
   	int Atas;
} T;


void PUSH (char x){ 					
    if(T.Atas == MaxElemen){  			
        cout << "Tumpukan Sudah Penuh";
        getch(); 
} else{
        T.Atas = T.Atas + 1;
        T.Isi[T.Atas] = x;
}
}


char POP(){
 		char hasil;
 if(T.Atas == 0){
    	cout<<"Tumpukan sudah kosong";
      		hasil = ' ';
   } else{
    		hasil = T.Isi[T.Atas];
      		T.Atas = T.Atas - 1;
   }
   return hasil;
}

//program utama
int main (){
     int I;       										
     char Kalimat[MaxElemen];   							
     system ("cls");
     T.Atas =0;  											
     
     cout<<"===========================\n";
     cout<<"\t STACK \t \n";
     cout<<"-PROGRAM PEMBALIKAN KALIMAT- \n";
     cout<<"===========================\n\n";


     cout << "Masukkan kalimat : "; gets(Kalimat);
	 cout<< "\t ------------------------ \t";
	 cout << "\n \n";
	 
     cout<<"Kalimat asli \t \t : "<<Kalimat;


     for(I=0; I<strlen(Kalimat) ;I++){
      		PUSH(Kalimat[I]);
      }

      cout<<"\nKalimat setelah dibalik  : ";


      for (I=0; I<strlen(Kalimat) ;I++){
       		cout<<""<<POP();
      }
      
       getch();
       return 0;
    } 
