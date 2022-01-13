#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int ao, bo;
	int aa, ba;
	
	printf ("_ _ _ _ _ _ _ _ _ _ _ _\n");
	printf ("mencari titik tengah\n\n");
	
	printf ("masukan X koordinat A	:");scanf("%d",&aa);
	printf ("masukan Y koordinat A	:");scanf("%d",&ao);
	printf ("masukan X koordinat b	:");scanf("%d",&ba);
	printf ("masukan Y koordinat b	:");scanf("%d",&bo);
	printf ("\n\n");
	
	int absis, ordinat, pencerminan;
	
	absis =(aa+bo)/2;
	ordinat =(ao+bo)/2;
	
	printf ("absis	:%d",absis); 
	printf ("\n");
	printf ("ordinat	:%d",ordinat);
	printf ("\n\n");
	
	pencerminan =(absis + ordinat)/2;
	
	printf("pencerminan sumbu X dan Y :%d",pencerminan);printf("\n\n");
	
	return 0;
}
