#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int v1=0,v2=0,v3=0,res=0;
printf("\n Selecciona la operacion deceada: \n ");
printf("\n ********************************* \n");
printf("\n 1.- Suma.\n ");
printf("\n 2.- Resta.\n ");
printf("\n 3.- Multiplicación.\n");
printf("\n 4.- Divición \n ");
printf("\n ********************************* \n ");
scanf("%d",&v1);
    if(v1==1)
	{
		printf("\n Introduce 2 valores para la suma: \n ");
		scanf("%d %d",&v2,&v3);
		res=v2+v3;
		printf("\n El resultado de la suma es de: %d", res);
		
	}
	
	else if(v1==2)
	{
		printf("\n Introduce 2 valores para la resta: \n");
		scanf("%d %d",&v2,&v3);
		res=v2-v3;
		printf("\n El resultado de la resta es de: %d", res);
	}
	
	else if(v1==3)
	{
		printf("\n Introduce 2 valores para la multiplicación: \n ");
		scanf("%d %d",&v2,&v3);
		res=v2*v3;
		printf("\n El resultado de la multiplicacion es de: %d", res);
	}
	else if(v1==4)
	{
		printf("\n Introduce 2 valores para la divición \n ");
		scanf("%d %d",&v2,&v3);
		res=v2/v3;
		printf("\n El resultado de la divición es de: %d", res);
		
	}
	else 
	{
		printf("Error de ingreso del menú");
	}
	
	getch ();
}

