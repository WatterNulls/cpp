 //Bibliotecas
#include<stdio.h>
#include<conio.h>
#include<math.h>
 //In°cio
	main(){
 //Declaraá∆o de Variaveis
	char NOME1,NOME2;
	int IDADE1,IDADE2;
 //Leitura
	clrscr();
	printf("\nEntre com o Nome da primeira pessoa: ");
	scanf("%c",&NOME1);
	printf("\nEntre com a Idade da primeira pessoa: ");
	scanf("%i",&IDADE1);
	printf("\nEntre com o Nome da segunda pessoa: ");
	scanf("%c",&NOME2);
	printf("\nEntre com a Idade da segunda pessoa: ");
	scanf("%i",&IDADE2);
 //Processamento
	if(IDADE1 == IDADE2){
		printf("%c e %c tem a mesma idade!",NOME1,NOME2);
	 }else if(IDADE1 > IDADE2){
		printf("A pessoa mais nova Ç %c",NOME2);
	 }else{
		printf("A pessoa mais nova Ç %c",NOME1);
	 }
 //Impress∆o dos Valores Lidos
	printf("O primeiro nome lido foi: %c",NOME1);
	printf("A primeira idade lida foi: %i",IDADE1);
	printf("O segundo nome lido foi: %c",NOME2);
	printf("A segunda idade lida foi: %i",IDADE2);
 //Fim
	getch();
}