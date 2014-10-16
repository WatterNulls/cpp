#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	clrscr();
	  int NUMERO1,NUMERO2,RESTO,N1,N2,MDC,MMC;

	  printf("CALCULADORA DE MDC E MMC");
	  printf("\n\n");
	  printf("Entre com o primeiro numero: ");
	  scanf("%i",&NUMERO1);
	  printf("\n\n");
	  printf("Entre com o segundo numero: ");
	  scanf("%i",&NUMERO2);

	  N1 = NUMERO1;
	  N2 = NUMERO2;

	  do{
	     RESTO = N1%N2;
	     N1 = N2;
	     N2 = RESTO;
	  }while(RESTO != 0);
	  MDC = N1;
	  MMC = (NUMERO1*NUMERO2)/MDC;

	  printf("\n\n");
	  printf("O MDC de %i e %i ‚: %i ",NUMERO1,NUMERO2,MDC);

	  printf("\n");
	  printf("O MMC de %i e %i ‚: %i ",NUMERO1,NUMERO2,MMC);
	getch();

       return 1;
}
