#include <stdio.h> 
#define MAX 10 

typedef struct { 
	int Item[MAX]; 
	int Front; 
	int Rear; 
	int Count; 
}	Queue;


 
// Inisialisasi antrian 
void Inisialisasi(Queue *q){ 
	q->Front = q->Rear = -1; 
	q->Count = 0; 
}


 
// Prosedur untuk menyisipkan data pada antrian 
void Tambah(Queue *q, int item){ 
	if ((q->Rear == MAX-1 && q->Front == 0) || (q->Rear + 1 == q->Front)){
 		printf ("\nAntrian Penuh"); 
 		return ; 
	} 
	if (q->Rear == MAX - 1) 
		q->Rear = 0; 
 	else 
		q->Rear++; 
 		q->Item[q->Rear] = item; 
		q->Count++; 
	if (q->Front == -1) q->Front = 0; 
}



// Prosedur untuk menghapus data dari antrian 
int Hapus(Queue *q){ 
	int data; 
	if (q->Front == -1){ 
		printf ("\nAntrian Kosong");
		return NULL; 
	} 
	else{ 
		data = q->Item[q->Front];
		q->Count--; 
	if (q->Front == q->Rear) 
		q->Front = q->Rear = -1; 
	else{ 
		if (q->Front == MAX-1) 
			q->Front = 0; 
		else 
			q->Front++;
		} 
	}
	return data; 
} 

void Tampil(Queue *q){ 
	for(int i=0; i<q->Count; i++) 
	printf("\nData : %d", q->Item[i]); 
}

int main(){ 
	Queue q; 
	int data; 
	Inisialisasi(&q); 
	Tambah(&q,5); 
	Tambah(&q,6); 
	Tambah(&q,7); 
	Tambah(&q,8); 
	Tambah(&q,9); 
	Tambah(&q,10);  
	Tampil(&q); 
	data = Hapus(&q); 
		printf("\nHapus Item = %d ", data); 
		data = Hapus(&q); 
		printf("\nHapus Item = %d ", data); 
		data = Hapus(&q); 
		printf("\nHapus Item = %d ", data); 
	Tampil(&q); 
}
