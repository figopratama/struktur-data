#include <iostream>
#include <conio.h>
#define max 20
using namespace std ;
void quick_sort(int darr[max], int lb, int ub){
    int a;
    int atas,bawah;
    int temp;
    
    if (lb>=ub){
        return;
    a=darr[lb];
    atas=ub;
    bawah=lb;
        while (bawah < atas){
            while (darr[bawah] <= a) 
            bawah++;
            while (darr[atas]>a)
            atas--;
            if(bawah<atas)
            {
                temp=darr[bawah];
                darr[bawah]=darr[atas];
                darr[atas]=temp;
        }
    }
    darr[lb]=darr[atas];
    darr[atas]=a;
    
    quick_sort(darr,lb,atas-1);
    quick_sort(darr,atas+1,ub);
}
 
int main(){
    int arr[max];
    int i,n,lb,ub;
    lb=0;
    printf("Figo Gymnastiar Farhaan Pratama\n");
    printf("20051397015\n");
    printf("MI_A_2020\n");
    cout<<"\tQUICK SORT\n\n";
    cout<<"Masukkan jumlah index : ";
    cin>>n;
    
    ub=n;
    cout<<"Masukkan data: \n\n";
    for(i=1;i<=n;i++){
        cout<<"data ke -> "<<i<<" : "; cin>>arr[i];
    }
    
    quick_sort(arr,lb,ub);
    cout<<"\nHasil pengurutan data: ";
    for(i=0; i<n;i++)
        cout<<" "<<arr[i];
    
    getch();
}