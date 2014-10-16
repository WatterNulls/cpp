//TurboC

//Importando bibliotecas
//#include<nome da biblioteca>
#include<stdio.h> //biblioteca de entrada e saida de dados
#include<conio.h> //biblioteca de estilo
#include<math.h> //biblioteca de operaÁıes matem·ticas complexas (potÍncia,raiz,..)
#include<string.h> //biblioteca de string (tratamento de vetor de char)

//Iniciando um algoritimo em turboC
//Necessario importar as bibliotecas necess·rias e declarar a classe principal (main)
// main(){ /*Comandos,funÁıes,etc do algoritimo*/}

//1-Inicio 
main(){
	clrscr();//comando para limpar a tela
	
			//Tipos de Variaveis 
			/*
			Inteiro(%i) : int
			Decimal(%f,%d) : float,double
			Literal(%s,%c) : string(vetor de char ex: char nome[40];), char(caractere 1 letra,numero,simbolo,..)
			Booleano(%b) : bool(verdadeiro/false, 0/1)
			*/

	//2-DeclaraÁ„o de Constantes(se houver)
	       const char FLAG[3] = "FIM"; //toda constante e precedida de CONST antes de seu tipo e nome
	//3-DeclaraÁ„o de Vari·veis
		int IDADE,SOMAIDADE,TOTPES; //inteiro
		float MEDIAIDADE; //real
		char NOME[30],SEXO[1]; //strings  (Neste exemplo SEXO foi transformado em vetor porque no turboC ele repete a mensagem quando È usado uma validaÁ„o com a estrutura repita-ate/enquanto)

	//4-InicializaÁ„o das Vari·veis
		SOMAIDADE = 0;
		TOTPES = 0;

	//5-Leitura de Dados e 6-Processamento e 7-Impress„o dos Valores Lidos e 8-Impress„o dos Resultados
		/*
			escreva("mensagem") = printf("mensagem");
			leia(Variavel) = scanf("%1™ letra do tipo da variavel",&VARIAVEL);

			--------------------------- && ---------------------------
					  ESTRUTURAS CONDICIONAIS E DE REPETI«√O

			- ESTRUTURA [SE]
			___________________________________________________
					Em PORTUGOL					EM C
				__________________		__________________
				SE condiÁ„o FA«A   	|	IF(condiÁ„o){
					comandos		|		comandos;
				FIM-SE				|	}
				__________________  |   __________________

			- ESTRUTURA [SE-SEN√O]
			___________________________________________________
					Em PORTUGOL					EM C
				__________________		__________________
				SE condiÁ„o FA«A   	|	IF(condiÁ„o){
					comandos		|		comandos;
					SEN¬O FA«A		|	}ELSE{
						comandos	|		comandos;
				FIM-SE				|	}
				__________________  |   __________________

			- ESTRUTURA [SE-SEN√O SE]
			___________________________________________________
					Em PORTUGOL								EM C
				____________________________	____________________________
				SE condiá∆o FAÄA   				|	IF(condiÁ„o){
					comandos					|		comandos;
					SEN«O SE(condiá∆o) FAÄA		|	}ELSE IF(condiÁ„o){
						comandos				|		comandos;
				FIM-SE							|	}
				____________________________	|____________________________

			- ESTRUTURA [ENQUANTO]
			___________________________________________________
						Em PORTUGOL					EM C
				________________________	_________________________
				ENQUANTO condiá∆o FAÄA   	|	WHILE(condiá∆o){
					comandos		|	   comandos;
				FIM-ENQUANTO			|	}
				________________________	|________________________

			- ESTRUTURA [REPITA-AT…]
			___________________________________________________
					Em PORTUGOL					EM C
				__________________		__________________
				REPITA			   	|	DO{
					comandos		|		comandos;
				AT… condiÁ„o		|	}WHILE(inverso da condiÁ„o do PORTUGOL);
				__________________  |   __________________

			- ESTRUTURA [REPITA-ENQUANTO]
			___________________________________________________
					Em PORTUGOL					EM C
				__________________		__________________
				REPITA			   	|	DO{
					comandos		|		comandos;
				ENQUANTO condiÁ„o	|	}WHILE(condiÁ„o);
				__________________  |   __________________

			- ESTRUTURA [PARA]
			___________________________________________________________________________________________________
							Em PORTUGOL													EM C
				______________________________________________		___________________________________________
				PARA condiÁ„o 1,condiÁ„o 2,incremento FA«A	   	|	FOR(condiÁ„o1;condiÁ„o2;contador+=incremento){
					comandos									|		comandos;
				FIM-PARA										|	}
				______________________________________________	|   ___________________________________________

			- ESTRUTURA [ESCOLHA]
			___________________________________________________
					Em PORTUGOL					 				EM C
				______________________________	___________________________________
				ESCOLHA(Variavel)			   	|	SWITCH(Variavel){
					CASO condiÁao1 FA«A			|		CASE condiÁ„o1 : comandos;
							comandos			|						 BREAK();
					CASO condiÁao2 FA«A			|		CASE condiÁ„o2 : comandos;
							comandos			|						 BREAK();
					SEN√O FA«A					|		DEFAULT : comandos;
							comandos			|		  		  BREAK();
				FIM-ESCOLHA						|	}
				_____________________________	|__________________________________
		*/

			//NOME
		do{//Repita
			printf(" Entre com um NOME (FIM - Sai): "); // escreva("mensagem")
			scanf("%s",&NOME);// leia(tipo string (%s), &nome da variavel)
		}while(strcmp(NOME,"")==1);/*enquanto NOME igual a vazio (È o mesmo que: Repita-AtÈ NOME diferente de vazio)
								     STRCMP(string1,string2) È uma funÁ„o para comparar strings retorna true/1 se forem iguas e false/0 se forem diferentes
									 no caso ir· repetir o escreva enquanto a variavel nome for igual a vazio
								   */

		//Loop ENQUANTO
		while(strcmp(NOME,"FIM")!=0){ //Enquanto NOME for diferente de FLAG("FIM") faÁa

				//IDADE
			do{
				printf("\n"); //insere uma linha em branco (\n muda de linha = <br> em HTML)
				printf(" Entre com a IDADE de %s : ",NOME); //escreva("mensagem com parte do texo igual ao valor da variavel");
														/* printf("Mensagem %1™ letra do tipo da variavel Mensagem",Variavel);
															para cada %tipo È necess·rio uma vari·vel
														*/
				scanf("%i",&IDADE);	// leia(tipo inteiro (%i),&nome da variavel)
			}while(IDADE<=0); // Enquanto IDADE for um digito e menor ou igual a 0(È o mesmo que: Repita-AtÈ IDADE diferente de 0)

				//SEXO
			do{//Repita
				printf("\n");
				printf(" Entre com o SEXO de %s (M-Masculino F-Feminino): ",NOME);
				scanf("%s",&SEXO);
			}while((strcmp(SEXO,"M")==0)&&(strcmp(SEXO,"F")==0));// Enquanto sexo for diferente de M e F (… o mesmo que: Repita-AtÈ sexo igual a M ou F)

			SOMAIDADE +=IDADE; //SOMAIDADE recebe ela mesma + IDADE
			TOTPES +=1; //TOTPES recebe ele mesmo + 1

			//por questıes estÈticas e de confiabilidade sugere-se a impress„o dos valores lidos

				printf("\n # O NOME lido foi: %s \n # A IDADE lida foi: %i \n # O SEXO lido foi: %s",NOME,IDADE,SEXO);

			//È necess·rio re-inserir o NOME para continuar ou parar o loop pois È ele quem determina a condiÁ„o
					//NOME
				do{
					printf("\n\n");
					printf(" Entre com um NOME (FIM - Sai): ",FLAG);
					scanf("%s",&NOME);
				}while(strcmp(NOME,"")==1);
		
		}
		
		//Aqui testamos se houve uma entrada de dados no caso se o contador de pessoas foi incrementado ao menos 1 vez;
		if(TOTPES>0){ //Se TOTPES for maior que 0
			MEDIAIDADE = SOMAIDADE/TOTPES; //MÈdia = Soma dos N˙meros DIVIDIDO pelo Total de N˙meros Somados
			//Exibe a mÈdia encontrada
			printf("\n");
			printf("A MêDIA das IDADES lidas ê: %0.2f",MEDIAIDADE);
		}else{ //Sen„o
			printf("\n");
			printf("N«O houve uma leitura de dados!");//Exibe uma mensagem que n„o leu nada
		}

//7-Fim
	getch(); //… uma funÁ„o que espera uma tecla ser apertada para sair da execuÁ„o do programa;
}


