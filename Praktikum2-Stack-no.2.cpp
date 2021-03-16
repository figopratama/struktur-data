#include<stdio.h>
#include<conio.h>

int MAXSTACK;
typedef int itemtype;

typedef struct
{
	itemtype item[300];
	int count;
}stack;

void initializestack(stack *s)
{
	s->count = 0;
}

int empty(stack *s)
{
	return (s->count == 0);
}

int full(stack *s)
{
	return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s)
{
	if(full(s))
 	printf("stack penuh !\n");
 	else
 {
 	s->item[s->count]=x;
 ++(s->count);
 }
}

int pop(stack *s)
{
 	if(empty(s))
 	printf("stack kosong\n");
 	else
 {
 --(s->count);
 return (s->item[s->count]);
 }
 return 0;
}
//deklarasi
int i, n, m, o,p,pilih;
int input;
stack tumpukan;
void biner();
void oktal();
void heksa();
main()
{
	printf("Tatsbita Thifalia \n");
	printf("20051397027\n");
	printf("\n");
	 printf(" Konversi Desimal ke Biner, Oktal dan Heksa Desimal \n");
	 initializestack(&tumpukan);
	 printf("\n Masukkan Bilangan Desimal : ");
	 scanf("%d", &input);
	 printf("\n MENU \n");
	 printf("1 Konversi ke Biner\n");
	 printf("2 Konversi ke Oktal\n");
 	 printf("3 Konversi ke Heksa\n");
 	 printf("4 Keluar");
 while(pilih<4){
 	printf("\n\n  :  ");
 	scanf("%d",&pilih);
 switch(pilih)
 {
 	case 1:
 		printf("Bilangan Biner: \n");
 		biner();break;
 	case 2:
 		printf("Bilangan Oktal: \n");
 		oktal();break;
 	case 3:
 		printf("Bilangan Heksa Desimal: \n");
 		heksa();break;
	 case 4:
		 printf("Terimakasih");
 }}
 	getch();
 	return 0;
}
//ke oktal
void oktal(){
	for(o=1,n=input;n>0;n=n/8,o++)
 	{
		 MAXSTACK=o;
		 m=n%8;
		 push(m,&tumpukan);
 	}
	for(i=MAXSTACK;i>0;i--)
 	{
 	printf("%d", pop(&tumpukan));
 	}
}
//ke biner
void biner(){
	for(o=1,n=input;n>0;n=n/2,o++)
	 {
		 MAXSTACK=o;
 		m=n%2;
		 push(m,&tumpukan);
	 }
	 for(i=MAXSTACK;i>0;i--)
	 {
	 printf("%d", pop(&tumpukan));
	 }
}
//ke heksa desimal
void heksa(){
	for(o=1,n=input;n>0;n=n/16,o++)
	 {
		 MAXSTACK=o;
		 m=n%16;
	 push(m,&tumpukan);
	 }
	 for(i=MAXSTACK;i>0;i--)
 	 {
 		p=pop(&tumpukan);
 		if(p<=9)
 		printf("%d",p);
 		else if(p==10)printf("A");
		else if(p==11)printf("B");
		else if(p==12)printf("C");
 		else if(p==13)printf("D");
 		else if(p==14)printf("E");
 		else if(p==15)printf("F");
	 }
}
