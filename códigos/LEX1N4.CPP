				//23/02/2011
//bibliotecas
#include<stdio.h>
#include<conio.h>
#include<math.h>
//inicio
main(){
	//constantes
	const TOTNUM3=3;
	//variaveis
	float NUM1,NUM2,NUM3,MEDIA;

	clrscr();
	//leitura
	printf("\n\nEntre com o 1ø n£mero:");
	scanf("%f",&NUM1);
	printf("\n\nEntre com o 2ø n£mero:");
	scanf("%f",&NUM2);
	printf("\n\nEntre com o 3ø n£mero:");
	scanf("%f",&NUM3);
	//processamento
	MEDIA=(NUM1+NUM2+NUM3)/TOTNUM3;
	//impressao leitura
	printf("\n\nO 1ø valor lido foi: %f",NUM1);
	printf("\n\nO 2ø valor lido foi: %f",NUM2);
	printf("\n\nO 3ø valor lido foi: %f",NUM3);
	//impressao resultado
	printf("\n\nDos trˆs valores lidos a M‚dia Aritim‚tica encontrada foi: %f",MEDIA);

//fim
getch();
}