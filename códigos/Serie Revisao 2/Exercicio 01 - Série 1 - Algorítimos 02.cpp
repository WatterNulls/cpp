#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

//Inicio
void main(){
	clrscr();

	//Force Float
	     float x, *y;
		 y = &x;
		 x = *y;

	//Declaração de Registros
	struct BOLETIM{
		int MATRICULA;
		char NOME[30];
		float NOTA[4];
		float MEDIA;

	};
	//Declaração de Constantes
	const int MAX = 3;

	//Declaração de Variáveis
	int I,J;
	struct BOLETIM BFOA[MAX];
	float MAIMED,MENMED,MEDTURMA,CMT,CM;

	//Inicialização de Variáveis
	CMT = 0;

	//Leitura
		for(I=0;I<MAX;I++){
			do{
				printf("Entre com a MATRICULA do %iº Aluno: ",(I+1));
				scanf("%i", &BFOA[I].MATRICULA);
			}while(BFOA[I].MATRICULA < 0);

			do{
				printf("\nEntre com o NOME do %i° Aluno: ",(I+1));
				scanf("%s", &BFOA[I].NOME);
			}while(BFOA[I].NOME == "");

			CM = 0;
			for(J=0;J<4;J++){
				do{
					printf("\nEntre com a NOTA do %i° BIMESTRE de %s :",(J+1),BFOA[I].NOME);
					scanf("%f", &BFOA[I].NOTA[J]);
				}while((BFOA[I].NOTA[J] < 0.0)||(BFOA[I].NOTA[J]>10.0));

				CM += BFOA[I].NOTA[J];
			}
				BFOA[I].MEDIA = CM/4;
				printf("A MÉDIA de %s é: %0.2f\n",BFOA[I].NOME,BFOA[I].MEDIA);

		}

	//Processamento
		for(I=0;I<MAX;I++){
			//MAIOR MEDIA E MENOR MEDIA
			if(I == 0){
				MAIMED = BFOA[I].MEDIA;
				MENMED = BFOA[I].MEDIA;
			}else{
				//MAIOR MEDIA
				if(BFOA[I].MEDIA > MAIMED){
					MAIMED = BFOA[I].MEDIA;
				}
				//MENOR MEDIA
				if(BFOA[I].MEDIA < MENMED){
					MENMED = BFOA[I].MEDIA;
				}
			}
			//MEDIA TURMA
			CMT += BFOA[I].MEDIA;
			MEDTURMA = CMT/MAX;

		}

	//Impressão Valores Lidos

	//Impressão Resultado
	printf("\nA) A Maior Média lida foi: %0.2f\nB) A Menor Média lida foi: %0.2f\nC) A Média Geral da Turma é: %0.2f",MAIMED,MENMED,MEDTURMA);

//Fim
	getch();

}