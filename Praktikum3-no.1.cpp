#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <alloc.h>

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();


struct simpul
{
    char judul [50], nama [50], penerbit [50];

    struct simpul *kiri, *kanan;
} mhs, *baru, *awal=NULL, *akhir=NULL,*hapus,*bantu;

int main(){
    do{
        clrscr();
        cout<<"====================="<<endl;
        cout<<" Perintah Linkedlist"<<endl;
        cout<<"====================="<<endl;
        cout<<"1. Tambah Depan"<<endl;
        cout<<"2. Tambah Belakang"<<endl;
        cout<<"3. Hapus Depan"<<endl;
        cout<<"4. Hapus Belakang"<<endl;
        cout<<"5. Tampilkan"<<endl;
        cout<<"6. Selesai"<<endl;
        cout<<"Pilihan Anda : ";
        cin>>pil;
        pilih();
    } while(pil!=6);

    return 0;
}

void pilih(){
    if(pil==1)
        tambah_depan();
    else if(pil==2)
        tambah_belakang();
    else if(pil==3)
        hapus_depan();
    else if(pil==4)
        hapus_belakang();
    else if(pil==5)
        tampil();
    else
        cout<<"selesai";
}

void buat_baru(){
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout<<"Masukkan Judul Buku    : ";
    cin>>baru->judul;
    cout<<"Masukkan Nama          : ";
    cin>>baru->nama;
    cout<<"Masukkan Penerbit Buku : ";
    cin>>baru->penerbit;
    baru->kiri=NULL;
    baru->kanan=NULL;
}

void tambah_belakang(){
    buat_baru();
    if(awal==NULL){
        awal=baru;
        akhir=baru;
    }
    else{
        akhir->kanan=baru;
        baru->kiri=akhir;
        akhir=baru;
    }
    cout<<endl;
    cout<<endl;
    tampil();
}

void tambah_depan(){
    buat_baru();
    if(awal==NULL){
        awal=baru;
        akhir=baru;
    }
    else{
        baru->kanan=awal;
        awal->kiri=baru;
        awal=baru;
    }
    cout<<endl;
    cout<<endl;
    tampil();
}

void hapus_depan(){
    if (awal==NULL)
        cout<<"Tidak ada(NULL)";
    else if (awal->kanan==NULL){
        hapus=awal;
        awal=NULL;
        akhir=NULL;
        free(hapus);
    }
    else{
        hapus=awal;
        awal=hapus->kanan;
        awal->kiri=NULL;
        free(hapus);
    }
    cout<<endl;
    cout<<endl;
    tampil();
}

void hapus_belakang(){
    if (awal==NULL)
        cout<<"Tidak ada(NULL)";
    else if (awal->kanan==NULL){
        hapus=awal;
        awal=NULL;
        akhir=NULL;
        free(hapus);
    }
    else{
        hapus=akhir;
        akhir=hapus->kiri;
        akhir->kanan=NULL;
        free(hapus);
    }
    cout<<endl;
    cout<<endl;
    tampil();
}

void tampil(){
    if (awal==NULL)
        cout<<"Tidak ada(NULL)";
    else{
        bantu=awal;
        while(bantu!=NULL){
            cout<<"==============================";
            cout<<" Perpustakaan Kota Mojokerto";
            COUT<<"==============================";
            cout<<"Judul Buku    : "<<bantu->judul;
            cout<<"Nama          : "<<bantu->nama;
            cout<<"Penerbit Buku : "<<bantu->penerbit;
            cout<<endl;
            cout<<endl;
            bantu=bantu->kanan;
        }
    }
    getch();
}