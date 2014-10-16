#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	clrscr();
	//Variaveis
	int OPCAO;
	//Leitura
	printf("Selecione uma opá∆o:");
	printf("\n\n");
	printf("1- Rotina de Inclus∆o de Alunos.");
	printf("\n\n");
	printf("2- Rotina de Alteraá∆o de Alunos.");
	printf("\n\n");
	printf("3- Rotina de Exclus∆o de Alunos.");
	printf("\n\n");
	printf("4- Rotina de Consulta de Alunos.");
	printf("\n\n OPÄ«O: ");
	scanf("%i",&OPCAO);
	printf("\n");
	// Processamento e Impress∆o
	switch(OPCAO){
		case 1: printf("Executando Rotina de Inclus∆o de Alunos...");
			break;
		case 2: printf("Executando Rotina de Alteraá∆o de Alunos...");
			break;
		case 3: printf("Executando Rotina de Exclus∆o de Alunos...");
			break;
		case 4: printf("Executando Rotina de Consulta de Alunos...");
			break;
		default: printf("Op∆o Inv†lida: %i !!",OPCAO);
	}
getch();
}