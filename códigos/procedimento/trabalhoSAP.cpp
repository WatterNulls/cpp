//		Trabalho Sub-Rotinas Revis�o
//	Integrantes
//	 - Lucas Franco
//	 - Viniciu Vicente
/*################################# PROGRAMA ################################*/

//Bibliotecas
#include<stdlib.h> // biblioteca standart
#include<stdio.h> // I/O base

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
        float RAIZ ;
    //Processamento
        RAIZ =  pow(NUM, 1.0/3.0);
    //Fim
    return RAIZ;
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
    system("cls");
    system("chcp 1252");
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
        printf("\t�rea da Esfera \t\t -[4]\n");
        printf("\tVolume da Esfera \t -[5]\n");
        printf("\tSair \t\t\t -[6]\n");
        printf("----------------------------------------------\n");
        do{
            printf("Mensagem:   Entre com a op��o desejada:");
            scanf("%i", &OPCAO);
        }while((OPCAO<1) and (OPCAO > 6));
        printf("\n\n");

    //Procesamento

            switch(OPCAO){

                    //Raiz Cubica
                case 1:
                        //textcolor(4);
                        printf("\t\t *** Raiz C�bica *** \n\n");
                        do{
                            printf("Entre com o n�mero a ser calculado a RAIZ:");
                            scanf("%i", &NUM);
                        }while(NUM <= 0);

                        //textcolor(10);
                        printf("\nA Raiz C�bica de %i �: %0.3f \n\n",NUM,RAIZ3(NUM));
                        break;

                    //Area Trapezio
                case 2: //textcolor(4);
                        printf("\t\t *** �rea do Trap�zio *** \n\n");
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

                        //textcolor(10);
                        printf("\nA �rea do Trap�zio cujas medidas s�o : \n\n\t -Base Maior : %0.3f \n\t -Base Menor : %0.3f \n\t -Altura : %0.3f \n\n �: %0.3f \n\n",BMAI,BMEN,ALTURA,AREA_TRAPEZIO(BMAI,BMEN,ALTURA));
                        break;

                    //Volume Cilindro
                case 3: //textcolor(4);
                        printf("\t\t *** Volume do Cil�ndro ***  \n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        do{
                            printf("Entre com o valor da Altura:");
                            scanf("%f", &ALTURA);
                        }while(ALTURA <= 0);

                        //textcolor(10);
                        printf("\nO Volume do Cil�ndro cujas medidas s�o : \n\n\t -Raio: %0.3f \n\t -Altura: %0.3f \n\n  �: %0.3f \n\n",RAIO,ALTURA,VOLUME_CILINDRO(RAIO,ALTURA));
                        break;

                    //Area Esfera
                case 4: //textcolor(4);
                        printf("\t\t *** �rea da Esf�ra ***\n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        //textcolor(10);
                        printf("\nA �rea da Esf�ra cujo Raio � : \n\n\t Raio: %0.3f \n\n �: %0.3f \n\n",RAIO,AREA_ESFERA(RAIO));
                        break;

                    //Vloume Esfera

                case 5: //textcolor(4);
                        printf("\t\t *** Volume da Esf�ra *** \n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        //textcolor(10);
                        printf("\nO Volume da Esf�ra cujo Raio � : \n\n\t Raio: %0.3f \n\n �: %0.3f \n\n",RAIO,VOLUME_ESFERA(RAIO));
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
