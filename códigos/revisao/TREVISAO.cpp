//		Trabalho Sub-Rotinas Revis�o
//	Integrantes
//	 - Lucas Franco
//	 - Viniciu Vicente
/*################################# PROGRAMA ################################*/

//Bibliotecas
#include<stdio.h> // I/O base
#include<conio.h> // Interface base
#include<math.h> // calculos matematicos
#include<string.h> // strings
#include<ctype.h> //fun��es de caracter

//Variaveis Globais
	//Constantes
	int MAX = 10;
	//Variaveis

//Registros
	struct PESSOAS{
		int codigo;
	   	char nome[50];
	};

/*########################### Procedimentos e Fun��es ###########################*/

	/*###### PROCEDIMENTO DE INCLUS�O ######*/

int INCLUSAO(struct PESSOAS *vet /*Vetor*/,int k /*�ndice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
	  int I; // �ndice do Vetor?
	  int J; // Posi��o do Vetor no Procedimento
	  char RESP1; // Confirma inclus�o? S ou N
	  char RESP; // Confirma continuar incluindo? S ou N

	//Inicializa��o Variaveis
	  RESP = 'S';

	//Leitura e Processamento

	//se o indice for maior que 0, fa�a-o ele mesmo
	if(k>0){
		I = k;
	//sen�o fa�a-o 0
	}else{
		I = 0;
	}

	//Enqanto desejar continuar incluindo e houver espa�o no vetor fa�a
	while((RESP == 'S') and (I<=MAX)){
		//Leia o Codigo
		do{
			printf("Entre com o c�digo:");
			scanf("%i", &CODAUX);

		}while(CODAUX<0);

		//Leia o Nome
		do{
			printf("Entre com o nome:");
			scanf("%s", &NOMEAUX);
		}while(strcmp(NOMEAUX, "") == 0);

		//Inicie o Indice no procedimento em 0
		J=0;

		//Enquanto o Codigo digitado n�o existir no vetor
		while((CODAUX != vet[J].codigo) and (J<I)){
			//continue procurando
			J += 1;
		}
		//At� n�o encontrar.
		if(J==I){
			//Ent�o pergunte se deseja incluir o nome na lista
			do{
				printf("Confirma a inclus�o? (S/N)");
				scanf("%c", &RESP1);
				RESP1 = toupper(RESP1);
			}while((RESP1 != 'S') and (RESP1 != 'N'));

			//se desejar incluir
			if(RESP1 == 'S'){
				//coloque o codigo no vetor
				vet[I].codigo = CODAUX;
				//coloque o nome no vetor
				strcpy(NOMEAUX ,vet[I].nome);
				//e diga que foi incluido com sucesso
				printf("Inclus�o efetuada com sucesso!");
			}
		//Se encontrar o c�digo no vetor diga que ele j� existe
		}else{
			printf("C�digo j� cadastrado!");
			//proteja o c�digo
			I -= 1;
		}


		//se for possivel continuar incluindo
		if(I<MAX){
			//Pergunte se deseja continuar incluindo
			do{
				printf("Deseja continuar incluindo? (S/N)");
				scanf("%c", &RESP);
				//RESP = toupper(RESP);
			}while((RESP != 'S') and (RESP != 'N'));
		}

	}//fim-loop de inclus�o

	//Transforme k em I
	k = I;

	//se o n�o houver mais espa�o no vetor alerte
	if(I>MAX){
		printf("Vetor j� est� Cheio! N�o � possiv�l armazenar mais valores!!!");
	}
	return 0;
}//fim-procedimento de inclus�o

	/* ####### PROCEDIMENTO DE ALTERA��O ######### */

int ALTERAR(struct PESSOAS *vet /*Vetor*/, int k /*�ndice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
//	  int I; // �ndice do Vetor
	  int J; // �ndice do Vetor no Procedimento
	  char RESP1; // Confirma Altera��o? S ou N
	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicializa��o Variaveis
	  RESP = 'S';

	//Leitura e Processamento
		//verifique se o vetor est� vazio
		if(k>0){
			//se n�o estiver fa�a
			//enquanto desejar continuar alterando
			while(RESP = 'S'){
				//pergunte o �ndice que deseja alterar
				do{
					printf("Entre com o c�digo do nome que deseja alterar:");
					//leia o indice
					scanf("%i", &CODAUX);
				}while(CODAUX<0);

			//Inicie o Indice do procedimento em 0
			J = 0;
				//procure pelo registro no vetor
				while((CODAUX != vet[J].codigo) and (J<MAX)){
					J += 1;
				}
				//se ach�-lo fa�a
				if(CODAUX == vet[J].codigo){
					//diga o nome registrado
					printf("O nome armazenado �: %s", vet[J].nome);
					//pe�a para digitar o novo nome
					do{
						printf("Entre com o novo nome:");
						gets(NOMEAUX);
					}while(strcmp(NOMEAUX,""));

					//pergunte se confirma a altera��o
					do{
						printf("Confirma a altera��o? (S/N)");
						scanf("%c", &RESP1);
						RESP1 = toupper(RESP1);
					}while((RESP1 != 'S') or (RESP1 != 'N'));
						//se confirmar fa�a
						if(RESP1 == 'S'){
							//altere o nome
							strcpy(NOMEAUX, vet[J].nome);
							//diga que foi alterado com sucesso
							printf("Altera��o efetuada com sucesso!");
						}

				//se o c�digo n�o existir alerte
				}else{
					printf("C�digo n�o cadastrado!");
				}

				//pergunte se deseja continuar alterando
				do{
					printf("Deseja continuar alterando? (S/N)");
					scanf("%c", &RESP);
					RESP = toupper(RESP);
				}while((RESP != 'S') or (RESP != 'N'));


			}//fim-loop altera��o

		//se o vetor estiver vazio avise
		}else{
			printf("Vetor Vazio !");
		}
 return 0;
}//fim-procedimento de altera��o

	/* ####### PROCEDIMENTO DE CONSULTA ######### */

int CONSULTAR(struct PESSOAS *vet /*Vetor*/, int k /*�ndice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
//	  int I; // �ndice do Vetor
	  int J; // �ndice do Vetor no Procedimento
	  char RESP1; // Confirma Altera��o? S ou N
	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicializa��o Variaveis
	  RESP = 'S';

	//Leitura e Processamento
		//verifique se o vetor est� vazio
		if(k>0){
			//se n�o estiver fa�a
			//enquanto desejar continuar consultando
			while(RESP = 'S'){
				//pergunte o �ndice que deseja consultar
				do{
					printf("Entre com o c�digo do nome que deseja consultar:");
					//leia o indice
					scanf("%i", &CODAUX);
				}while(CODAUX<0);

			//Inicie o Indice do procedimento em 0
			J = 0;
				//procure pelo registro no vetor
				while((CODAUX != vet[J].codigo) and (J<MAX)){
					J += 1;
				}
				//se ach�-lo fa�a
				if(CODAUX == vet[J].codigo){
					//diga o nome registrado
					printf("O nome armazenado �: %s", vet[J].nome);

				//se o c�digo n�o existir alerte
				}else{
					printf("C�digo n�o cadastrado!");
				}

				//pergunte se deseja continuar alterando
				do{
					printf("Deseja continuar consultando? (S/N)");
					scanf("%c", &RESP);
					RESP = toupper(RESP);
				}while((RESP != 'S') or (RESP != 'N'));


			}//fim-loop consultar

		//se o vetor estiver vazio avise
		}else{
			printf("Vetor Vazio !");
		}

}//fim-procedimento de consulta


	/* ####### PROCEDIMENTO DE IMPRESS�O ######### */

void IMPRIMIR(struct PESSOAS *vet /*Vetor*/, int k /*�ndice*/){
	//Inicio
	//Variaveis
//	  char NOMEAUX[50]; //Nome Auxiliar
//	  int CODAUX; //Codigo Auxiliar
//	  int I; // �ndice do Vetor
	  int J; // �ndice do Vetor no Procedimento
//	  char RESP1; // Confirma Altera��o? S ou N
//	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicializa��o Variaveis


	//Processamento
		//verifique se o vetor est� vazio
		if(k>0){
			//se n�o estiver fa�a

			//Inicie o Indice do procedimento em 0
			J = 0;

			//mostre o titulo da opera��o
			printf("\n\nImpress�o da Lista de Nomes\n\n");
				//procure os registros do vetor
				while(J<MAX){
					//diga o codigo e o nome registrado
					printf("C�digo %i\t: %s", vet[J].codigo, vet[J].nome);

					//passe para o pr�ximo
					J += 1;
				}
				//mostre como sair da impress�o
				printf("\nAperte qualquer tecla para finalizar a impress�o!");
				getch();

		//se o vetor estiver vazio avise
		}else{
			printf("Vetor Vazio !");
		}

}//fim-procedimento de impress�o

/*################################ PROGRAMA PRINCIPAL ################################*/
int main(){
	//Inicio
	system("cls");
    system("chcp 1252");
    //clrscr();


	//Inicio
	//Variaveis
	struct PESSOAS VET_CAD[MAX]; //crie o vetor de cadastro
	int opcao;
	//Menu
		do{
			printf("\t\tALGORITIMOS II\n");
			printf("\t   Aplica��o de Sub-Rotinas\n");
			printf("----------------------------------------------\n");
			printf("\t\tLista de Nomes\n\n");
			printf("\tInserir\t\t-[1]\n");
			printf("\tAlterar\t\t-[2]\n");
			printf("\tConsultar\t-[3]\n");
			printf("\tImprimir\t-[4]\n");
			printf("\tSair\t\t-[5]\n");
			printf("----------------------------------------------\n");
			do{
				 textcolor(10);
				 cprintf("Mensagem: Entre com a op��o desejada:");
				scanf("%i", &opcao);
			}while((opcao<1) and (opcao>5));
            printf("\n\n");

			switch(opcao){
				case 1: INCLUSAO(VET_CAD,MAX);
					break;
				case 2: ALTERAR(VET_CAD,MAX);
					break;
				case 3: CONSULTAR(VET_CAD,MAX);
					break;
				case 4: IMPRIMIR(VET_CAD,MAX);
					break;
				case 5: printf("Saindo...");
					break;
			}
		}while(opcao != 5);
	//Fim
	printf("Pressione uma tecla para fechar!");
	getch();
return 0;
}
