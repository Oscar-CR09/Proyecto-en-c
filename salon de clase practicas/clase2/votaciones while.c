#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int pri=0,prd=0,pan=0,mo=0,v=0,op=0;
	
	printf("Elije del menú el candidato a escoger \n");
	printf(" \n 1-PRI \n");
	printf(" 2-PAN \n");
	printf(" 3-MORENA \n");
	printf(" 4-PRD \n");
	scanf("%d",&v);
	
	while(v!=0)
		
	{
		switch(v)
		{
			
			case 1:
			  pri++;
			  break;
	        case 2:
				pan++;
				break;
	        case 3:
				mo++;
				break;
			case 4:
				prd++;
				break;
	        default:
		        printf("Error de ingreso de datos");
				break;
		}	
			
		printf("Elije del menú el candidato a escoger");
		printf("1-PRI \n");
		printf("2-PAN \n");
		printf("3-MORENA \n");
		printf("4-PRD \n");
		
		scanf("%d",&v);
			
			
	}
	printf("\n Total de votos de PRI es: %d \n",pri);
	printf(" Total de votos de PAN es: %d \n",pan);
	printf(" Total de votos de MORENA es: %d \n",mo);
	printf(" Total de votos de PRD es: %d \n",prd);
	getch ();
}

