#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
int main(){
    char string[100];   
    int rvsstring;     
    cout << "========================================================"; 
    cout<<endl;
    cout << "Program Membalik Kalimat";
    cout<<endl;
    cout << "========================================================";
    cout<<endl;
    cout<<endl;
    cout << "Masukkan Kalimat : ";cin>>string;
    cout << "Hasilnya         : ";

    rvsstring = strlen(string) - 1;
    while (rvsstring >= 0){
    cout << string[rvsstring];
    rvsstring = rvsstring - 1;  
        }
    getch();
    }
}