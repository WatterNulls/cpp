#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

main(){
//inicio
clrscr();
//variaveis
       int IDADE,TOTPES,SOMAIDADE;
       float MEDIDADE;
       char NOME[50];
       char SEXO;

//Ini. Variaveis
	IDADE = 0;
	TOTPES = 0;
	SOMAIDADE = 0;
	MEDIDADE = 0.0;

       //leitura
       do{
		printf("Entre com um Nome (Digite FIM para sair):");
		gets(NOME);
		printf("\n\n");
       }while(strcmp(NOME,"")==0);

       while(strcmp(NOME,"FIM")!=0){

		do{
		    printf("Entre com a Idade de %s :",NOME);
		    scanf("%i",&IDADE);
		    printf("\n\n");
		}while(IDADE<=0);

		do{
		    printf("Entre com o Sexo de %s (M para Masculino e F para Feminino):",NOME);
		    scanf("%c",&SEXO);
		    printf("\n\n");
		}while((SEXO=='M' || SEXO=='F'));
		//Processamento
		TOTPES += 1;
		SOMAIDADE += IDADE;

		printf("A ultima pessoa lida foi %s, %c com %i anos.",NOME,SEXO,IDADE);
		printf("\n\n");

		do{
			printf("Entre com um Nome (Digite FIM para sair):");
			gets(NOME);
			printf("\n\n");
		}while((NOME=="")&&(NOME==NULL));
       }

       if(TOTPES>0){
		MEDIDADE = SOMAIDADE/TOTPES;
		printf("\n\n");
		printf("Foram lidas %i Idades.",TOTPES);
		printf("\n\n");
		printf("A M‚dia delas foi: %0.2f",MEDIDADE);
       }

//fim
 getch();
}