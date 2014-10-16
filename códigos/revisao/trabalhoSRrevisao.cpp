//		Trabalho Sub-Rotinas Revisão
//	Integrantes
//	 - Lucas Franco
//	 - Viniciu Vicente
/*################################# PROGRAMA ################################*/

//Bibliotecas
#include<stdio.h> // I/O base
#include<conio.h> // Interface base
#include<math.h> // calculos matematicos
#include<string.h> // strings
#include<ctype.h> //funções de caracter

//Variaveis Globais
	//Constantes
	int MAX = 10;
	//Variaveis

//Registros
	struct PESSOAS{
		int codigo;
	   	char nome[50];
	};

/*########################### Procedimentos e Funções ###########################*/

	/*###### PROCEDIMENTO DE INCLUSÃO ######*/

int INCLUSAO(struct PESSOAS *vet /*Vetor*/,int k /*Índice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
	  int I; // Índice do Vetor?
	  int J; // Posição do Vetor no Procedimento
	  char RESP1; // Confirma inclusão? S ou N
	  char RESP; // Confirma continuar incluindo? S ou N

	//Inicialização Variaveis
	  RESP = 'S';

	//Leitura e Processamento

	//se o indice for maior que 0, faça-o ele mesmo
	if(k>0){
		I = k;
	//senão faça-o 0
	}else{
		I = 0;
	}

	//Enqanto desejar continuar incluindo e houver espaço no vetor faça
	while((RESP == 'S') and (I<=MAX)){
		//Leia o Codigo
		do{
			printf("Entre com o código:");
			scanf("%i", &CODAUX);

		}while(CODAUX<0);

		//Leia o Nome
		do{
			printf("Entre com o nome:");
			scanf("%s", &NOMEAUX);
		}while(strcmp(NOMEAUX, "") == 0);

		//Inicie o Indice no procedimento em 0
		J=0;

		//Enquanto o Codigo digitado não existir no vetor
		while((CODAUX != vet[J].codigo) and (J<I)){
			//continue procurando
			J += 1;
		}
		//Até não encontrar.
		if(J==I){
			//Então pergunte se deseja incluir o nome na lista
			do{
				printf("Confirma a inclusão? (S/N)");
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
				printf("Inclusão efetuada com sucesso!");
			}
		//Se encontrar o código no vetor diga que ele já existe
		}else{
			printf("Código já cadastrado!");
			//proteja o código
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

	}//fim-loop de inclusão

	//Transforme k em I
	k = I;

	//se o não houver mais espaço no vetor alerte
	if(I>MAX){
		printf("Vetor já está Cheio! Não é possivél armazenar mais valores!!!");
	}
	return 0;
}//fim-procedimento de inclusão

	/* ####### PROCEDIMENTO DE ALTERAÇÃO ######### */

int ALTERAR(struct PESSOAS *vet /*Vetor*/, int k /*Índice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
//	  int I; // Índice do Vetor
	  int J; // Índice do Vetor no Procedimento
	  char RESP1; // Confirma Alteração? S ou N
	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicialização Variaveis
	  RESP = 'S';

	//Leitura e Processamento
		//verifique se o vetor está vazio
		if(k>0){
			//se não estiver faça
			//enquanto desejar continuar alterando
			while(RESP = 'S'){
				//pergunte o índice que deseja alterar
				do{
					printf("Entre com o código do nome que deseja alterar:");
					//leia o indice
					scanf("%i", &CODAUX);
				}while(CODAUX<0);

			//Inicie o Indice do procedimento em 0
			J = 0;
				//procure pelo registro no vetor
				while((CODAUX != vet[J].codigo) and (J<MAX)){
					J += 1;
				}
				//se achá-lo faça
				if(CODAUX == vet[J].codigo){
					//diga o nome registrado
					printf("O nome armazenado é: %s", vet[J].nome);
					//peça para digitar o novo nome
					do{
						printf("Entre com o novo nome:");
						gets(NOMEAUX);
					}while(strcmp(NOMEAUX,""));

					//pergunte se confirma a alteração
					do{
						printf("Confirma a alteração? (S/N)");
						scanf("%c", &RESP1);
						RESP1 = toupper(RESP1);
					}while((RESP1 != 'S') or (RESP1 != 'N'));
						//se confirmar faça
						if(RESP1 == 'S'){
							//altere o nome
							strcpy(NOMEAUX, vet[J].nome);
							//diga que foi alterado com sucesso
							printf("Alteração efetuada com sucesso!");
						}

				//se o código não existir alerte
				}else{
					printf("Código não cadastrado!");
				}

				//pergunte se deseja continuar alterando
				do{
					printf("Deseja continuar alterando? (S/N)");
					scanf("%c", &RESP);
					RESP = toupper(RESP);
				}while((RESP != 'S') or (RESP != 'N'));


			}//fim-loop alteração

		//se o vetor estiver vazio avise
		}else{
			printf("Vetor Vazio !");
		}
 return 0;
}//fim-procedimento de alteração

	/* ####### PROCEDIMENTO DE CONSULTA ######### */

int CONSULTAR(struct PESSOAS *vet /*Vetor*/, int k /*Índice*/){
	//Inicio
	//Variaveis
	  char NOMEAUX[50]; //Nome Auxiliar
	  int CODAUX; //Codigo Auxiliar
//	  int I; // Índice do Vetor
	  int J; // Índice do Vetor no Procedimento
	  char RESP1; // Confirma Alteração? S ou N
	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicialização Variaveis
	  RESP = 'S';

	//Leitura e Processamento
		//verifique se o vetor está vazio
		if(k>0){
			//se não estiver faça
			//enquanto desejar continuar consultando
			while(RESP = 'S'){
				//pergunte o índice que deseja consultar
				do{
					printf("Entre com o código do nome que deseja consultar:");
					//leia o indice
					scanf("%i", &CODAUX);
				}while(CODAUX<0);

			//Inicie o Indice do procedimento em 0
			J = 0;
				//procure pelo registro no vetor
				while((CODAUX != vet[J].codigo) and (J<MAX)){
					J += 1;
				}
				//se achá-lo faça
				if(CODAUX == vet[J].codigo){
					//diga o nome registrado
					printf("O nome armazenado é: %s", vet[J].nome);

				//se o código não existir alerte
				}else{
					printf("Código não cadastrado!");
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


	/* ####### PROCEDIMENTO DE IMPRESSÃO ######### */

void IMPRIMIR(struct PESSOAS *vet /*Vetor*/, int k /*Índice*/){
	//Inicio
	//Variaveis
//	  char NOMEAUX[50]; //Nome Auxiliar
//	  int CODAUX; //Codigo Auxiliar
//	  int I; // Índice do Vetor
	  int J; // Índice do Vetor no Procedimento
//	  char RESP1; // Confirma Alteração? S ou N
//	  char RESP; // Confirma continuar Alterando? S ou N

	//Inicialização Variaveis


	//Processamento
		//verifique se o vetor está vazio
		if(k>0){
			//se não estiver faça

			//Inicie o Indice do procedimento em 0
			J = 0;

			//mostre o titulo da operação
			printf("\n\nImpressão da Lista de Nomes\n\n");
				//procure os registros do vetor
				while(J<MAX){
					//diga o codigo e o nome registrado
					printf("Código %i\t: %s", vet[J].codigo, vet[J].nome);

					//passe para o próximo
					J += 1;
				}
				//mostre como sair da impressão
				printf("\nAperte qualquer tecla para finalizar a impressão!");
				getch();

		//se o vetor estiver vazio avise
		}else{
			printf("Vetor Vazio !");
		}

}//fim-procedimento de impressão

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
			printf("\t   Aplicação de Sub-Rotinas\n");
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
				 cprintf("Mensagem: Entre com a opção desejada:");
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
