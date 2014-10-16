 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<math.h>
 #include<string.h>
 #include<ctype.h>

 //Variaveis Globais
 char OP,NOME[40],EMAIL[40],TELEFONE[16];
 const char Arquivo[20] = {"AgendaP.txt"};
 int I,CONT=0;

 FILE *fp;

 void INCLUIR(void){
	fp = fopen( Arquivo,"a");
		if(!fp){
			printf("Erro ao abrir o arquivo");
			exit(0);
		}else{

		while ((toupper(OP) != 'N')&&(CONT<300)){
			printf("Entre com o Nome:");
			do{
				scanf("%s", &NOME);
			}while(NOME == "");
				printf("\n");
			printf("Entre com o E-mail:");
			do{
				scanf("%s", &EMAIL);
			}while(EMAIL == "");
				printf("\n");
			printf("Entre com o Telefone:");
			do{
				scanf("%s", &TELEFONE);
			}while(TELEFONE == "");
				printf("\n");

			//Insere os dados no arquivo;
			fprintf(fp,"%s\n",NOME);
			fprintf(fp,"%s\n",EMAIL);
			fprintf(fp,"%s\n",TELEFONE);
			
			printf("\n");
			textcolor(10);
			cprintf("Incluido com Sucesso!");
			printf("\n");
			
			CONT+=1;
			
			printf("Deseja continuar incluindo? (S ou N)");
				do{
				scanf("%c",&OP);
				}while((toupper(OP) !='S')&&(toupper(OP) !='N'));
		}

		}

	fclose(fp);
 }
 void LISTAR(void){
	fp = fopen(Arquivo, "r");
		textcolor(12);
		printf("\n\n");
		cprintf("--------------------LISTANDO-----------------------");
			while ((fscanf(fp,"\n%s", NOME))!=EOF) {
			printf("\nNome: %s",NOME);
			fscanf(fp,"\n%s", &EMAIL);
			printf("\nEmail: %s", EMAIL);
			fscanf(fp,"\n%s", &TELEFONE);
			printf("\nTelefone: %s\n", TELEFONE);
			fscanf(fp,"\n");
			printf("\n------------------\n");
			}
		printf("\n\n");
		cprintf("--------------------LISTANDO-----------------------");
		printf("\n\n");
	fclose(fp);
 }

 void EXCLUIR(void){
	printf("Deseja realmente excluir o arquivo AgendaP.txt? (S ou N)");
				do{
				scanf("%c",&OP);
				}while((toupper(OP) !='S')&&(toupper(OP) !='N'));
				
		if(OP == 'S'){
			remove(Arquivo);
			printf("\n");
			textcolor(5);
			cprintf("Arquivo excluido com sucesso!");
			printf("\n");
		}
	}
 

 int main(){
	//inicio
	clrscr();

	//Variaveis
	int OPCAO;
	//Leitura
	do{
		printf("Trabalho Arquivos\nAgenda de Contatos\n\t[1] - Incluir Novo\n\t[2] - Excluir\n\t[3] - Listar\n\t[4] - Sair\nEntre com a opção desejada: ");
		do{
			scanf("%i", &OPCAO);
		}while((OPCAO<0)||(OPCAO>4));

		switch(OPCAO){
			case 1: INCLUIR();
					break;
			case 2: EXCLUIR();
					break;
			case 3: LISTAR();
					break;
			case 4: printf("Saindo...");
					break;
			default: printf("Op‡Æo Inválida!");
					break;
		}
	}while(OPCAO!=4);
	//Processamento

	//fim
 getch();
 return 0;
 }