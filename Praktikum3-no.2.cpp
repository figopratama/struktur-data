#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct kendaraan {
int no_plat;
char nama[20];
char merk[20];
   
   kendaraan *next;
   kendaraan *prev;
} *awal=NULL, *akhir, *baru, *bantu, *setelah, *sebelum, *hapus;

void buat_baru();
void sisip_depan();
void sisip_tengah();
void sisip_belakang();
void hapus_depan();
void hapus_tengah();
void hapus_belakang();
void cetak();
bool check(int checker);

main(){
int pilih;

   cout<<"================================"<<endl;
   cout<<"   Menu Data Parkir :  "<<endl;
   cout<<"================================"<<endl;
   cout<<"1. Data Baru"<<endl;
   cout<<"2. Tambahkan data di Kiri"<<endl;
   cout<<"3. Tambahkan data di Tengah"<<endl;
   cout<<"4. Tambahkan data di Kanan"<<endl;
   cout<<"5. Hapus Data di KIRI"<<endl;
   cout<<"6. Hapus Data di KANAN"<<endl;
   cout<<"7. Hapus Data terakhir"<<endl;
   cout<<"8. Cetak"<<endl;
   cout<<"9. Keluar Program";
   cout<<endl;
   cout<<endl;
   cout<<"Masukkan Perintah (Angka): "<<endl;
   cin>>pilih;

   switch(pilih){
      case 1 : buat_baru();
         cout<<"Data pertama berhasil ditambahkan\n";
         system("pause");
                  system("cls");
                  goto menu;
         case 2 : sisip_depan();
         system("pause");
                  system("cls");
                  goto menu;
         case 3 : sisip_tengah();
                  system("cls");
                  goto menu;
         case 4 : sisip_belakang();
                  system("cls");
                  goto menu;
         case 5 : hapus_depan();
                  system("cls");
                  goto menu;
         case 6 : hapus_tengah();
                  system("cls");
                  goto menu;
         case 7 : hapus_belakang();
                  system("cls");
                  goto menu;
         case 8 : cetak();
                  system("cls");
                  goto menu;
         case 9 : return 0;
         default : system("cls");
         goto menu;
      }
}

void buat_baru(){
   baru = new kendaraan;
   cout<<"Masukkan No parkir              : ";
   cin>>baru->no_plat;
   cout<<"Masukkan nama pemilik kendaraan : ";
   gets(baru->nama);
   cout<<"Masukkan merk Kendaraan         : ";
   gets(baru->merk);

   baru->next = NULL;
   baru->prev = NULL;
   if(awal == NULL){
    awal = akhir = baru;
   }
}
void sisip_depan(){
  buat_baru();
   if(awal == NULL){
    awal = baru;
   }
   else {
    baru->next = awal;
      awal->prev = baru;
    awal = baru;
    cout<<"--: Data berhasil ditambahkan di depan data sebelumnya:--\n";
   }
}
void sisip_tengah(){
   int letak;
  baru = new kendaraan;
   cout<<"Masukkan No.                        : ";
   cin>>baru->no_plat;
   cout<<"Masukkan nama pemilik kendaraan     : ";
   gets(baru->nama);
   cout<<"Masukkan merk Kendaraan             : ";
   gets(baru->merk); 

   cout<<"Data ini akan dimasukkan setelah No.: ";
   cin>>letak;
   baru->next = NULL;
   baru->prev = NULL;

   if ((awal == NULL) || (akhir == NULL)){
    awal = akhir = baru;
      cout<<"Data berhasil ditambahkan\n";
      cout<<"Hanya ada 1 data\n";
      system("pause");
   }

   else if (((awal->next == NULL) && (awal->prev == NULL)) || ((akhir->next == NULL) && (akhir->prev == NULL))){
    cout<<"Penambahan GAGAL !!\n";
      cout<<"Hanya ada 1 Data\n";
      system("pause");
   }

   else {
    if ( check(letak) == true){
      setelah = awal;
         while(setelah->no_plat != letak){
        setelah = setelah->next;}
         baru->prev = setelah;
         if (setelah->next == NULL){
            baru->next = akhir;
      setelah->next = baru;
        akhir = baru;
            akhir->next = NULL;
            cout<<"Data berhasil ditambahkan\n";
      system("pause");
         }
         else {
      baru->next = setelah->next;
      setelah->next->prev = baru;
      setelah->next = baru;
          cout<<"Data dengan No. ID : "<<baru->no_plat<<" telah ditambahkan setelah nomor plat "<<letak<<"\n";
            system("pause");
         }
    }
      else {
      cout<<"Data tidak dengan plat nomer tersebut tidak ada\n";
      system("pause");
      }
   }
}

void sisip_belakang(){
   buat_baru();
   if(awal==NULL){
   awal=baru;
   akhir=baru;
   }
   else {
   akhir->next=baru;
   baru->prev=akhir;
   akhir=baru;
   }
   cout << endl;
   }

void hapus_depan(){
if(awal==NULL){
    cout << "KOSONG!!";
   }
   else if(awal->next==NULL){
    hapus=awal;
      awal=NULL;
      akhir=NULL;
      delete hapus;
   }
   else {
    hapus=awal;
      awal=hapus->next;
      awal->prev=NULL;
      delete hapus;
   }
   cout << endl;
   cout << "TERHAPUS!!\n";
   }


void hapus_tengah(){
   if ((awal == NULL) || (akhir == NULL)){
    cout<<"Penghapusan GAGAL !!\n";
      cout<<"Tidak ada Data\n";
      system("pause");
   }
   else if (((awal->next == NULL) && (awal->prev == NULL)) || ((akhir->next == NULL) && (akhir->prev == NULL))){
    cout<<"Penghapusan GAGAL !!\n";
      cout<<"Hanya ada 1 Data\n";
      system("pause");
   }
   else if (((awal->next->next == NULL) && (awal->prev == NULL)) || ((akhir->next == NULL) && (akhir->prev->prev == NULL))){
cout<<"Penghapusan GAGAL !!\n";
      cout<<"Hanya ada 2 Data\n";
      system("pause");
   }
   else{
   int letak;
   cout<<"Pilih No. plat yang akan dihapus : ";
   cin>>letak;
    if ( check(letak) == true){
  hapus = awal;
      while(hapus->no_plat != letak){
    sebelum = hapus;
      hapus = hapus->next;
          }
      hapus->prev->next = hapus->next;
    hapus->next->prev = hapus->prev;
      hapus = NULL;
    cout<<"Data dengan No. plat : "<<letak<<" telah dihapus\n";
      }
      else {
    cout<<"Data tidak dengan plat nomer tersebut tidak ada\n";
      system("pause");
    }
   }
}
bool check(int checker){
bantu = awal;
while (bantu != NULL){
         if (bantu->no_plat == checker)
          return true;
   bantu = bantu->next;
   }
}
void hapus_belakang(){
if (((awal->next == NULL) && (awal->prev == NULL)) || ((akhir->next == NULL) && (akhir->prev == NULL))){
      awal = NULL;
      akhir = NULL;
      cout<<"Semua data telah dihapus\n";
      system("pause");
      }
   else {
hapus = akhir;
    akhir->prev->next=NULL;
    akhir = hapus->prev;
    hapus = NULL;
      cout<<"Data pada urutan terakhir sudah dihapus\n";
   }
}
void cetak(){
if ((awal == NULL) || (akhir == NULL)){
    cout<<"Data Kosong\n";
      system("pause");}
   else{
bantu = awal;
   while (bantu != NULL){
   cout<<"================================================";
   cout<<"No. PLAT          : "<<bantu->no_plat<<"\n";
   cout<<"nama pemilik      : "<<bantu->nama<<"\n";
   cout<<"merk kendaraan    : "<<bantu->merk<<"\n";
   cout<<"==============================================\n";
   bantu = bantu->next;
   cout<<endl;
   }
   system("pause");  
   getche();
   }
}