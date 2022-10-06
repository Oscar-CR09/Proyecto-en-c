#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int v1=0,v2,desc=0;
	printf("\n Introduce el monto a pagar: \n");
	scanf("%d",&v1);
	if(v1>2300)
	{
		v2=v1*.05;
		desc=v1-v2;
	}
	else
	   {
		v2=v1*.03;
		desc=v1-v2;
	}
	printf("\n Total a pagar con el descuento es: %d ",desc);
	getch;
}

