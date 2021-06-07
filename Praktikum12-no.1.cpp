#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct Node{
    int data;
    Node *kiri;
    Node *kanan;
};

Node *pohon = NULL;
void tambah (Node **root, int databaru){
    if ((*root)==NULL){
        Node *baru;
        baru = new Node;
        baru->data=databaru;
        baru->kiri=NULL;
        baru->kanan=NULL;
        (*root) = baru;
        (*root) -> kiri = NULL;
        (*root) -> kanan = NULL;
        printf("Data Bertambah!");
    }
    else if (databaru<(*root)->data)
        tambah(&(*root)->kiri,databaru);
    else if (databaru>(*root)->data)
        tambah(&(*root)->kanan,databaru);
    else if (databaru==(*root)->data)
        printf("Data Sudah ada!");
}

void preOrder(Node *root){
    if(root!=NULL){
        if(root->data!=NULL){
            printf("%d ",root->data);
        }
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

void inOrder(Node *root){
    if(root!=NULL){
        inOrder(root->kiri);
        if(root->data!=NULL){
            printf("%d ",root->data);
        }
        inOrder(root->kanan);
    }
}


void postOrder(Node *root){
    if(root!=NULL){
        postOrder(root->kiri);
        postOrder(root->kanan);
        if(root->data!=NULL){
            printf("%d ",root->data);
        }
    }
}

void search(Node **root, int cari){
    if((*root) == NULL){
        printf("Data tidak ditemukan!");
    }
    else if(cari < (*root)->data)
        search(&(*root)->kiri,cari);
    else if(cari > (*root)->data)
        search(&(*root)->kanan,cari);
    else if(cari == (*root)->data)
        printf("Data ditemukan!");
}


int count(Node *root){
    if(root==NULL)
        return 0;
    else
        return count(root->kiri)+ count(root->kanan)+1;
}

int height(Node *root){
    if(root == NULL)
        return -1;
    else{
        int u = height(root->kiri);
        int v = height(root->kanan);
        if(u > v)
            return u + 1;
        else
            return v + 1;
    }
}

void hapus(Node **root, int del){
    Node *curr;
    Node *parent;
    curr = (*root);
    bool flag = false;
    while(curr != NULL){
        if(curr->data == del){
            flag = true;
            break;
        }
        else{
            parent = curr;
            if(del>curr->data)
                curr = curr->kanan;
            else
                curr = curr->kiri;
        }
    }

    if(!flag){
        cout<<"Data tidak ditemukan. Penghapusan tidak dilakukan."<<endl;
        return;
    }

    if(height(pohon) == 0){
        if( curr->kiri== NULL && curr->kanan == NULL){
            (*root) = NULL;
            return;
            }
        }

        else if(height(pohon) > 0){
            if( curr->kiri== NULL && curr->kanan == NULL){
                if(parent->kiri == curr){
                    parent->kiri = NULL;
                    delete curr;
                }
                else{
                    parent->kanan = NULL;
                    delete curr;
                }

                return;
            }

            if((curr->kiri == NULL && curr->kanan != NULL)|| (curr->kiri != NULL && curr->kanan == NULL)){
                if(curr->kiri == NULL && curr->kanan != NULL){
                    if(parent->kiri == curr){
                        parent->kiri = curr->kanan;
                        delete curr;
                    }
                    else{
                        parent->kanan = curr->kanan; 
                        delete curr;
                    }
                }
            
                else{
                    if(parent->kiri == curr){
                        parent->kiri = curr->kiri; //ganti isi parent->kiri dengan curr->kiri
                        delete curr;
                    }
                    else{
                        parent->kanan = curr->kiri; //ganti isi parent->kanan dengan curr->kiri
                        delete curr;
                    }
                }

                return;
            }

            if (curr->kiri != NULL && curr->kanan != NULL){
                Node* bantu;
                bantu = curr->kanan;

                if((bantu->kiri == NULL) && (bantu->kanan == NULL)){
                    curr = bantu;
                    delete bantu;
                    curr->kanan = NULL;
                }

                else{
                    if((curr->kanan)->kiri != NULL){
                        Node* bantu2;
                        Node* bantu3;
                        bantu3 = curr->kanan;         
                        bantu2 = (curr->kanan)->kiri; 

                        while(bantu2->kiri != NULL){
                            bantu3 = bantu2;
                            bantu2 = bantu2->kiri;
                        }
                        
                        curr->data = bantu2->data;
                        delete bantu2;
                        bantu3->kiri = NULL;
                    }

                    else{
                        Node* tmp;
                        tmp = curr->kanan;
                        curr->data = tmp->data;
                        curr->kanan = tmp->kanan;
                        delete tmp;
                    }

                }
                     return;
        }
    }
}

int main(){
    char pil;
    int del,cari;
    while (true){
        system("cls"); //bersihkan layar
        char data;
        printf("RIZKI JANUAR IRMANSYAH\n");
        printf("20051397046\n");
        printf("MI_B_2020\n");
        printf("\n\t==================");
        printf("\nMENU");
        printf("\n----\n");
        printf("[1] Tambah Data\n");
        printf("[2] Lihat Pre-Order\n");
        printf("[3] Lihat In-Order\n");
        printf("[4] Lihat Post-Order\n");
        printf("[5] Delete\n");
        printf("[6] Kosongkan Data\n");
        printf("[7] Search\n");
        printf("[8] Hitung Node pada Tree\n");
        printf("[9] Kedalaman Tree\n");
        printf("[X] Keluar\n");
        printf("Pilihan Anda : ");
        scanf("%c",&pil);
        fflush(stdin); //mengosongkan buffering
        switch(pil){
            case '1':
                printf("\nINPUT : ");
                printf("\n-------");
                printf("\nMasukkan data: ");
                scanf("%d", &data);
                     
                tambah(&pohon,data);
                getch();
                break;

            
            case '2':
                printf("\nOUTPUT PRE ORDER : ");
                printf("\n------------------\n");
                if(pohon!=NULL)
                    preOrder(pohon);
                else
                    printf("Masih Kosong!!!");
                _getch();
                break;
                    
            
            case '3':
                printf("\nOUTPUT IN ORDER : ");
                printf("\n------------------\n");
                if(pohon!=NULL)
                    inOrder(pohon);
                else
                    printf("Masih Kosong!!!"); 
                _getch();
                break;


            case '4':
                printf("\nOUTPUT POST ORDER : ");
                printf("\n------------------\n");
                if(pohon!=NULL)
                    ostOrder(pohon);
                else
                    printf("Masih Kosong!!!");
                _getch();
                break;
                  

            case '5':
                if(pohon!=NULL){
                    printf("\nSEBELUM NODE DIHAPUS : ");
                    printf("\n---------------------- ");
                    printf("\nPRE ORDER  : ");
                    preOrder(pohon); //panggil fungsi
                    printf("\nIN ORDER   : ");
                    inOrder(pohon); //panggil fungsi
                    printf("\nPOST ORDER : ");
                    postOrder(pohon); //panggil fungsi
                    printf("\n\nPENGHAPUSAN DATA : ");
                    printf("\n------------------\n");
                    printf("Masukkan data yang ingin dihapus: ");
                    scanf("%d", &del);
                    hapus(&pohon, del);
                    printf("\n\nSETELAH NODE DIHAPUS : ");
                    printf("\n---------------------- ");
                    printf("\nPRE ORDER  : ");
                    preOrder(pohon); //panggil fungsi
                    printf("\nIN ORDER   : ");
                    inOrder(pohon); //panggil fungsi
                    printf("\nPOST ORDER : ");
                    postOrder(pohon); //panggil fungsi
                }
                else
                    printf("\nMasih kosong!");
                _getch();
                break;

            
            case '6':
                pohon=NULL;
                printf("\nPENGOSONGAN ELEMEN ");
                printf("\n------------------");
                printf("\nTree sudah dikosongkan!!");
                      
                _getch();
                break;


            case '7':
                printf("\nOUTPUT -> Hanya untuk mengecek apakah data dimaksud terdapat dalam tree");
                printf("\n------");
                if(pohon!=NULL){
                    printf("\nPRE ORDER  : ");
                    preOrder(pohon); 
                    printf("\nIN ORDER   : ");
                    inOrder(pohon);
                    printf("\nPOST ORDER : ");
                    postOrder(pohon);
                    printf("\n\nPENCARIAN DATA");
                    printf("\n--------------");
                    printf("\nMasukkan data yang ingin dicari : ");
                    scanf("%d", &cari);
                    search(&pohon, cari);
                }  

                else
                    printf("\nMasih kosong!");

                _getch();
                break;

              
            case '8':
                printf("\nJUMLAH NODE DI DALAM TREE");
                printf("\n-------------------------");
                printf("\nJumlah Node :  %d", count(pohon));
                    
                _getch();
                break;
           
              
            case '9' :
                printf("\nKEDALAMAN TREE(LEVEL-> DIMULAI DARI 0)");
                printf("\n----------------------------------------");
                printf("\nKedalaman tree : %d\n", height(pohon));                 
                _getch();
                break;
             

            case 'X'|'x':
                exit(0);
                break;
        }
    }
}