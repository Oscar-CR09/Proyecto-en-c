#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int edad=0,antiguedad=0,j1=0,j2=0,j3=0,j4=0;
	int valor=0;
	
	
	system ("color b9");
	int x=0;
	
	printf("Ingrese 1 para entrar ");
	scanf("%d",&valor);
	
	while(valor!=0)
	{
		
		printf("Ingrese su edad:");
		scanf("%d",&edad);
		printf("Ingrese su antiguedad:");
		scanf("%d",&antiguedad);
		system("cls");
		if (edad>=60 && antiguedad<25)
		{
			printf("Jubilacion es por edad \n");
			j1++;
			
			
		}
		else
			if (edad>=60 && antiguedad>25)
		{
				printf("Jubilacion es por edad adulta \n");
				j2++;
				
		}
			else
				if (edad<60 && antiguedad>25)
			{
					printf("Jubilacion es por antiguedad joven \n");
					j3++;
					
			}
				else
				{
					printf("No tiene por que jubilarse \n");
					j4++;
					
					
				}
				printf("Ingrese 0 para salir del programa y 1 para seguir: ");			
				scanf("%d",&valor);
				
	}
	printf("\n Jubilacion es por edad son total de: %d ",j1);
	printf("\n Jubilacion es por edad adulta son: %d ",j2);
	printf("\n Jubilacion es por antiguedad joven: %d",j3);
	printf("\n No tiene por que jubilarse: %d ",j4);
	
	
	
	return 0;
}
