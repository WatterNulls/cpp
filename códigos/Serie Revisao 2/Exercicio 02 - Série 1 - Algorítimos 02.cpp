#include<stdio.h>
#include<conio.h<]>
#include<math.h>
#include<string.h>

//Inicio
void main(){
	clrscr();
	
	//Force Float
	     float x, *y;
		 y = &x;
		 x = *y;
	
	//Declara��o de Registros
		struct ENDERECO{
			char LOGRADOURO[30];
			char NUMERO[10];
			char COMPLEMENTO[30];
			char BAIRRO[30];
			char CIDADE[30];
			char ESTADO[2];	
		};
		
		struct DATA{
			int DIA;
			int MES;
			int ANO;
		};
		
		struct FUNCIONARIO{
			int MATRICULA;
			char NOME[30];
			struct ENDERECO END;
			char PROFISSAO[30];
			char DATA DTADM;
			char DEPARTAMENTO;
		};
		
	//Declara��o de Constantes
		const int MAX = 3;
		
	//Declara��o de Vari�veis
		struct FUNCIONARIO FXPTO;
		int I;
		int OPCAO;
	//Inicializa��o de Vari�veis
		
	//Leitura
		for(I=0;I<MAX;I++){
			do{
				printf("Entre com a Matr�cula do %i� Funcion�rio: ",(I+1));
				scanf("%i", &FXPTO[I].MATRICULA);
			}while(FXPTO[I].MATRICULA < 0);
			
			do{
				printf("Entre com o Nome do Funcionario %i : ",FXPTO[I].MATRICULA);
				scanf("%s", &FXPTO[I].NOME);
			}while(FXPTO[I].NOME == "");
			
			printf("\n-- ENDERE�O --\n");
			do{
				printf("#	LOGRADOURO : ");
				scanf("%s", &FXPTO[I].END.LOGRADOURO);
			}while(FXPTO[I].END.LOGRADOURO == "");
			
			do{
				printf("#	N�MERO : ");
				scanf("%s", &FXPTO[I].END.NUMERO);
			}while(FXPTO[I].END.NUMERO < 0);
			
			do{
				printf("#	COMPLEMENTO : ");
				scanf("%s", &FXPTO[I].END.COMPLEMENTO);
			}while(FXPTO[I].END.COMPLEMENTO == "");
			
			do{
				printf("#	BAIRRO : ");
				scanf("%s", &FXPTO[I].END.BAIRRO);
			}while(FXPTO[I].END.BAIRRO == "");
			
			do{
				printf("#	CIDADE : ");
				scanf("%s", &FXPTO[I].END.CIDADE);
			}while(FXPTO[I].END.CIDADE == "");
			
			do{
				printf("#	ESTADO : ");
				scanf("%s", &FXPTO[I].END.ESTADO);
			}while(FXPTO[I].END.ESTADO == "");
			
			do{
				printf("Entre com a Profiss�o de %s",FXPTO[I].NOME);
				scanf("%s", &FXPTO[I].PROFISSAO);
			}while(FXPTO[I].PROFISSAO == "");
			
			printf("\n-- DATA DE ADMI��O --\n");
			do{
				printf("#	DIA : ");
				scanf("%i", &FXPTO[I].DTADM.DIA);
			}while((FXPTO[I].DTADM.DIA < 0)||(FXPTO[I].DTADM.DIA > 31));
			
			do{
				printf("#	M�S : ");
				scanf("%i", &FXPTO[I].DTADM.MES);
			}while((FXPTO[I].DTADM.MES < 0)||(FXPTO.DTADM.MES > 12));
			
			do{
				printf("#	ANO : ");
				scanf("%i", &FXPTO[I].DTADM.ANO);
			}while(FXPTO[I].DTADM.ANO < 1940);
			
			do{
				printf("Entre com o DEPARTAMENTO de %s : ",FXPTO[I].NOME);
				scanf("%s", &FXPTO[I].DEPARTAMENTO);
			}while(FXPTO[I].DEPARTAMENTO == "");
		}
	//Processamento
			printf("\n-- LISTAGEM --\n\n\t1 - Funcion�rios por Departamento\n\t2 - Funcion�rios com 10 Anos de Admi��o");
			scanf("%i", &OPCAO);
			
			switch(OPCAO){
				case 1:		printf("MATRICULA		NOME		DATA ADMI��O		DEPARTAMENTO		ESTADO");
							printf("%i		%s		%i/%i/%i		%s		%s",FXPTO[I].MATRICULA,FXPTO[I].NOME,FXPTO[I].DTADM.DIA,FXPTO[I].DTADM.MES,FXPTO[I].DTADM.ANO,FXPTO[I].DEPARTAMENTO,FXPTO[I].END.ESTADO);	
							
						break();
				
				case 2: for(I=0;I<MAX;I++){
							printf("MATRICULA		NOME		DATA ADMI��O		DEPARTAMENTO		ESTADO");
							if(FXPTO[I].DTADM.ANO >= ANOATUAL){
							printf("%i		%s		%i/%i/%i		%s		%s",FXPTO[I].MATRICULA,FXPTO[I].NOME,FXPTO[I].DTADM.DIA,FXPTO[I].DTADM.MES,FXPTO[I].DTADM.ANO,FXPTO[I].DEPARTAMENTO,FXPTO[I].END.ESTADO);	
							}
						}
						break();
						
				default: printf("Escolha uma OPCAO");
						break();
						
			}
	//Impress�o Valores Lidos
	
	//Impress�o Resultado
	
//Fim
	getch();

}