//		Trabalho Sub-Rotinas Revisão
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
#include<ctype.h> //funções de caracter

//Variaveis Globais
float PI = 3.14159265;

/*########################### Procedimentos e Funções ###########################*/

	/*###### FUNÇÃO RAIZ CÚBICA ######*/

float RAIZ3(int NUM){
    //Inicio
    //Variaveis
        float RAIZ ;
    //Processamento
        RAIZ =  pow(NUM, 1.0/3.0);
    //Fim
    return RAIZ;
}

    /*###### FUNÇÃO ÁREA DO TRAPÉZIO ######*/

float AREA_TRAPEZIO(float B, float b, float H){
    //Inicio
    //Variaveis
        float AREA;
    //Processamento
        AREA = ((B+b)/2)*H;
    //Fim
    return AREA;
}

    /*###### FUNÇÃO VOLUME DO CILINDRO ######*/

float VOLUME_CILINDRO(float R, float H){
    //Inicio
    //Variaveis
        float VOLUME;
    //Processamento
        VOLUME = (PI*(pow(R,2)))*H;
    //Fim
    return VOLUME;
}

    /*###### FUNÇÃO ÁREA DA ESFÉRA ######*/

float AREA_ESFERA(float R){
    //Inicio
    //Variaveis
        float AREA;
    //Processamento
        AREA = 4*PI*(pow(R,2));
    //Fim
    return AREA;
}

    /*###### FUNÇÃO VOLUME DA ESFÉRA ######*/

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
        printf("\t  Aplicação de Sub-Rotinas\n");
        printf("----------------------------------------------\n");
        printf("\tRaiz Cúbica \t\t -[1]\n");
        printf("\tÁrea do Trapézio \t -[2]\n");
        printf("\tVolume do Cilindro \t -[3]\n");
        printf("\tÁrea da Esfera \t\t -[4]\n");
        printf("\tVolume da Esfera \t -[5]\n");
        printf("\tSair \t\t\t -[6]\n");
        printf("----------------------------------------------\n");
        do{
            printf("Mensagem:   Entre com a opção desejada:");
            scanf("%i", &OPCAO);
        }while((OPCAO<1) and (OPCAO > 6));
        printf("\n\n");

    //Procesamento

            switch(OPCAO){

                    //Raiz Cubica
                case 1:
                        //textcolor(4);
                        printf("\t\t *** Raiz Cúbica *** \n\n");
                        do{
                            printf("Entre com o número a ser calculado a RAIZ:");
                            scanf("%i", &NUM);
                        }while(NUM <= 0);

                        //textcolor(10);
                        printf("\nA Raiz Cúbica de %i é: %0.3f \n\n",NUM,RAIZ3(NUM));
                        break;

                    //Area Trapezio
                case 2: //textcolor(4);
                        printf("\t\t *** Área do Trapézio *** \n\n");
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
                        printf("\nA Área do Trapézio cujas medidas são : \n\n\t -Base Maior : %0.3f \n\t -Base Menor : %0.3f \n\t -Altura : %0.3f \n\n é: %0.3f \n\n",BMAI,BMEN,ALTURA,AREA_TRAPEZIO(BMAI,BMEN,ALTURA));
                        break;

                    //Volume Cilindro
                case 3: //textcolor(4);
                        printf("\t\t *** Volume do Cilíndro ***  \n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        do{
                            printf("Entre com o valor da Altura:");
                            scanf("%f", &ALTURA);
                        }while(ALTURA <= 0);

                        //textcolor(10);
                        printf("\nO Volume do Cilíndro cujas medidas são : \n\n\t -Raio: %0.3f \n\t -Altura: %0.3f \n\n  é: %0.3f \n\n",RAIO,ALTURA,VOLUME_CILINDRO(RAIO,ALTURA));
                        break;

                    //Area Esfera
                case 4: //textcolor(4);
                        printf("\t\t *** Área da Esféra ***\n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        //textcolor(10);
                        printf("\nA Área da Esféra cujo Raio é : \n\n\t Raio: %0.3f \n\n é: %0.3f \n\n",RAIO,AREA_ESFERA(RAIO));
                        break;

                    //Vloume Esfera

                case 5: //textcolor(4);
                        printf("\t\t *** Volume da Esféra *** \n\n");
                        do{
                            printf("Entre com o valor do Raio:");
                            scanf("%f", &RAIO);
                        }while(RAIO <= 0);

                        //textcolor(10);
                        printf("\nO Volume da Esféra cujo Raio é : \n\n\t Raio: %0.3f \n\n é: %0.3f \n\n",RAIO,VOLUME_ESFERA(RAIO));
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
