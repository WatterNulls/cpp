#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	clrscr();
	//Vari veis
	int CODIGO,QUANTIDADE;
	float TOTAL;
	//Leitura
	printf("            CASA BURGER     ");
	printf("\n");
	printf("C¢digo       Produto        Pre‡o ");
	printf("\n");
	printf("  1     Hamburger......... R$1,80 ");
	printf("\n");
	printf("  2     Cheeseburger...... R$2,00 ");
	printf("\n");
	printf("  3     Fritas............ R$2,00 ");
	printf("\n");
	printf("  4     Refrigerante...... R$0,80 ");
	printf("\n");
	printf("  5     Milkshake......... R$1,50 ");
	printf("\n");
	printf("PEDIDO: ");
	scanf("%i",&CODIGO);
	printf("\n");
	printf("QUANTIDADE: ");
	scanf("%i",&QUANTIDADE);
	printf("\n");
	//Processamento e ImpressÆo
	if(QUANTIDADE>0){
	switch(CODIGO){
		case 1:	TOTAL = (1.80)*QUANTIDADE;
			printf("TOTAL = R$%0.2f",TOTAL);
			break;
		case 2: TOTAL = (2.00)*QUANTIDADE;
			printf("TOTAL = R$%0.2f",TOTAL);
			break;
		case 3: TOTAL = 2.00*QUANTIDADE;
			printf("TOTAL = R$%0.2f",TOTAL);
			break;
		case 4: TOTAL = 0.80*QUANTIDADE;
			printf("TOTAL = R$%0.2f",TOTAL);
			break;
		case 5: TOTAL = (1.50)*QUANTIDADE;
			printf("TOTAL = R$%0.2f",TOTAL);
			break;
		default: printf("C¢digo Inv lido: %i",CODIGO);
	}

	}else{
		printf("Pedido Cancelado!!");
	}
getch();
}