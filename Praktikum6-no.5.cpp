#include <iostream>
using namespace std;

int main(){

    int x;
    cout << "========================================================"; 
    cout<<endl;
    cout << "Program Pengecekan Bilangan Prima";
    cout<<endl;
    cout << "========================================================";
    cout<<endl;
    cout<<endl;
    cout<<"Masukkan Angka: ";
    cin>>x;

    int prima = 1;
    for(int a=2; a<x; a++){
        if(x%a==0)
            prima=0;
    }

    if (prima){
        cout<<x<<" Adalah bilangan prima";
        cout<<endl;
    }

    else{
        cout<<x<<" Adalah bukan bilangan prima";
        cout<<endl;
    }

    return 0;
}