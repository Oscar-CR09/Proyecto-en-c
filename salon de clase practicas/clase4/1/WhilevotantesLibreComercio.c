#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() 
{
	system("color a3");
int dipfavor=0,dipcontra=0,dipobstener=0,x=0,valor1=0,op=0;

	printf("Esto es una encuesta por el tratado libre comercio: \n ");
	printf("\n Si esta a favor: \n ");
	printf("\n Si esta a en contra: \n ");
	printf("\n Si esta en aptinecia: \n ");
	printf("\n Desea entrar en la encuesta:");
	printf("\n Si=1\n");
	printf("\n No=0 \n");
	
	scanf("%d",&valor1);
	
	while(valor1!=0)
	{
		printf("\n Seleccione la opcion a decidir: \n ");
		printf("\n Opcion 1 A favor: \n ");
		printf("\n Opcion 2 En contra: \n ");
		printf("\n Opcion 3 aptinencia: \n ");
		scanf("%d",&op);
		
		system("cls");
		
		switch(op)
		{
		case 1:
			dipfavor++;
			break;
		case 2:
			dipcontra++;
			break;
		case 3:
			dipobstener++;
			break;
		default:
			printf("Error de ingreso de datos:");
			break;
			
		}
		printf("\n Desea entrar en la encuesta:");
		printf("\n Si=1\n");
		printf("\n No=0 \n");
		scanf("%d",&valor1);
		
		system("cls");
	}
	printf("\n Total de votantes a favor: %d \n ",dipfavor);
	printf("\n Total de votantes en contra: %d \n ",dipcontra);
	printf("\n Total de votantes en abstinencia: %d \n ",dipobstener);

	
	
	getch ();
}

