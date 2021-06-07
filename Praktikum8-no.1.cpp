#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int val[100];
    int i, n, t;
    cout<<endl;
    printf("Figo Gymnastiar Farhaan Pratama\n");
    printf("20051397015\n");
    printf("MI_A_2020\n");
    cout<<"\n\t\t\tPengurutan Menaik Metode Shell Shot \n\n\n";
    cout<<"Masukkan Jumlah Data yg ingin di urutkan : ";cin>>n;
    cout<<endl;
    for(i = 0; i < n; i++){
        cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
    }

    for(int w = n/2; w > 0;w=w/2){
       for(int x = w; x < n; x++){
          for (int y = x-w; y >= 0; y-=w){
             if(val[y+w] < val[y]){
                t=val[y+w];
                val[y+w]=val[y];
                val[y]=t;
            }
         }
      }
    }

    cout<<endl;
    cout<<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
    cout<<endl;
    for(i = 0; i < n; i++){
        cout<<val[i]<<" ";
    }
    getch();
}