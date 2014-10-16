//		Trabalho Sub-Rotinas Revis�o
//	Integrantes
//	 - Lucas Franco
//	 - Viniciu Vicente
/*################################# PROGRAMA ################################*/

//Bibliotecas
#include<stdio.h> // I/O base
#include<stdlib.h> // biblioteca standart
#include<conio.h> // Interface base
//#include<conio2.h> // Interface base2
//#include<windows.h> // Interface pro windowns??

#include<math.h> // calculos matematicos
#include<string.h> // strings
#include<ctype.h> //fun��es de caracter

//Variaveis Globais
float PI = 3.14159265;

/*########################### Procedimentos e Fun��es ###########################*/

	/*###### FUN��O RAIZ C�BICA ######*/

float RAIZ3(int NUM){
    //Inicio
    //Variaveis
        float RAIZC ;
    //Processamento
        RAIZC =  pow(NUM, 1.0/3.0);
    //Fim
    return RAIZC;
}

    /*###### FUN��O �REA DO TRAP�ZIO ######*/

float AREA_TRAPEZIO(float B, float b, float H){
    //Inicio
    //Variaveis
        float AREA;
    //Processamento
        AREA = ((B+b)/2)*H;
    //Fim
    return AREA;
}

    /*###### FUN��O VOLUME DO CILINDRO ######*/

float VOLUME_CILINDRO(float R, float H){
    //Inicio
    //Variaveis
        float VOLUME;
    //Processamento
        VOLUME = (PI*(pow(R,2)))*H;
    //Fim
    return VOLUME;
}

    /*###### FUN��O �REA DA ESF�RA ######*/

float AREA_ESFERA(float R){
    //Inicio
    //Variaveis
        float AREA;
    //Processamento
        AREA = 4*PI*(pow(R,2));
    //Fim
    return AREA;
}

    /*###### FUN��O VOLUME DA ESF�RA ######*/

float VOLUME_ESFERA(float R){
    //Inicio
    //Variaveis
        float VOLUME;
    //Processamento
        VOLUME = (4*PI*(pow(R,3)))/3;
    //Fim
    return VOLUME;
}

int main(){
    //Inicio
	clrscr();
	// system("cls");
	system("chcp 1252"); //Imprimir acentos no MS-DOS
    //Variaveis
    int OPCAO;
    int NUM;
    float BMAI,BMEN,ALTURA,RAIO;
    //Leitura
    do{
	printf("\n\t\tALGORITIMOS II\n");
	printf("\t  Aplica��o de Sub-Rotinas\n");
	printf("----------------------------------------------\n");
	printf("\tRaiz C�bica \t\t -[1]\n");
	printf("\t�rea do Trap�zio \t -[2]\n");
	printf("\tVolume do Cilindro \t -[3]\n");
	printf("\t�rea da Esf�ra \t\t -[4]\n");
	printf("\tVolume da Esf�ra \t -[5]\n");
	printf("\tSair \t\t\t -[6]\n");
	printf("----------------------------------------------\n");
	do{
	    textcolor(14);
	    cprintf("Mensagem:   Entre com a op��o desejada:");
	    scanf("%i", &OPCAO);
	}while((OPCAO<1) && (OPCAO > 6));
	printf("\n\n");

    //Procesamento

	    switch(OPCAO){

		    //Raiz Cubica
		case 1:
			textcolor(4);
                printf("\t\t");
		    cprintf(" *** Raiz C�bica *** ");
		printf("\n\n");
			do{
			    printf("Entre com o n�mero a ser calculado a RAIZ CUBICA:");
			    scanf("%i", &NUM);
			}while(NUM <= 0);

			textcolor(10);
		printf("\n");
		    cprintf("A Raiz C�bica de %i �: %0.3f ",NUM,RAIZ3(NUM));
		printf("\n\n");
			break;

		    //Area Trapezio
		case 2:
	    textcolor(4);
		printf("\t\t");
		    cprintf(" *** �rea do Trap�zio *** ");
		printf("\n\n");
			do{
			    printf("Entre com o valor da Base Maior:");
			    scanf("%f", &BMAI);
			}while(BMAI <= 0);

			do{
			    printf("Entre com o valor da Base Menor:");
			    scanf("%f", &BMEN);
			}while(BMEN <= 0);

			do{
			    printf("Entre com o valor da Altura:");
			    scanf("%f", &ALTURA);
			}while(ALTURA <= 0);

			textcolor(10);
				printf("\n");
					cprintf("A �rea do Trap�zio cujas medidas s�o :");
				printf("\n\n\t");
					cprintf("-Base Maior : %0.3f",BMAI);
				printf("\n\t");
					cprintf("-Base Menor : %0.3f",BMEN);
				printf("\n\t");
					cprintf("-Altura     : %0.3f",ALTURA);
				printf("\n\n");
					cprintf(" �: %0.3f",AREA_TRAPEZIO(BMAI,BMEN,ALTURA));
				printf("\n\n");
			break;

		    //Volume Cilindro
		case 3:
	    textcolor(4);
		printf("\t\t");
		    cprintf(" *** Volume do Cil�ndro *** ");
				printf("\n\n");
			do{
			    printf("Entre com o valor do Raio:");
			    scanf("%f", &RAIO);
			}while(RAIO <= 0);

			do{
			    printf("Entre com o valor da Altura:");
			    scanf("%f", &ALTURA);
			}while(ALTURA <= 0);

			textcolor(10);
				printf("\n");
					cprintf("O Volume do Cil�ndro cujas medidas s�o :");
				printf("\n\n\t");
					cprintf("-Raio: %0.3f",RAIO);
				printf("\n\t");
					cprintf("-Altura: %0.3f",ALTURA);
				printf("\n\n");
					cprintf(" �: %0.3f ",VOLUME_CILINDRO(RAIO,ALTURA));
				printf("\n\n");
			break;

		    //Area Esfera
		case 4:
	    textcolor(4);
		printf("\t\t");
		    cprintf(" *** �rea da Esf�ra *** ");
				printf("\n\n");
			do{
			    printf("Entre com o valor do Raio:");
			    scanf("%f", &RAIO);
			}while(RAIO <= 0);

			textcolor(10);
				printf("\n");
					cprintf("A �rea da Esf�ra cujo Raio � :");
				printf("\n\n\t");
					cprintf("-Raio: %0.3f",RAIO);
				printf("\n\n");
					cprintf(" �: %0.3f ",AREA_ESFERA(RAIO));
				printf("\n\n");
			break;

		    //Vloume Esfera

		case 5:
	    textcolor(4);
		printf("\t\t");
		    cprintf(" *** Volume da Esf�ra *** ");
				printf("\n\n");
			do{
			    printf("Entre com o valor do Raio:");
			    scanf("%f", &RAIO);
			}while(RAIO <= 0);

			textcolor(10);
		printf("\n");
			cprintf("O Volume da Esf�ra cujo Raio � : ");
				printf("\n\n\t");
					cprintf("-Raio: %0.3f",RAIO);
				printf("\n\n");
					cprintf(" �: %0.3f",VOLUME_ESFERA(RAIO));
				printf("\n\n");
			break;
		    //Sair
		default: printf("Saindo...");
			 break;
	    }
	}while(OPCAO != 6);
    //Fim
    printf("\nAperte qualquer tecla para fechar!");
    getch();
    return 0;
}
