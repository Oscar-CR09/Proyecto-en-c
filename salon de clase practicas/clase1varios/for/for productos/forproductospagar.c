#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int v1=0, v2=0, res=0,x=1;
	for(int x=1;x<=100;x++)
	{
		printf("INGRESE LA CANTIDAD A PAGAR \n");
		scanf("%d",&v1);
		printf("INGRESE LA CANTIDAD RESIBIDA \n");
		scanf("%d",&v2);
		if(v1>v2)
		{
			res=v1-v2;
			printf("\n tu cambio es de : %d \n",res);
		}
		else
		   {
			printf("Gracias por tu visita \n ");
		}
	}
	return 0;
}

