#include<stdio.h>
#include<conio.h>

int main ()
{
	char nama [25];
	int umur;
	char alamat [50];
	
	printf("masukan nama anda	:");gets( nama);
	printf("masukan alamat anda	:");gets(alamat);
	printf("masukan umur anda	:");scanf("%d",& umur);
	
	printf("\nNama anda	: %s",nama);
	printf("\nAlamat anda	: %s",alamat);
	printf("\nUmur	: %d",umur);
	
	return 0;
}
		
