#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int p=0,ta=0;
	printf("\n Introduce el precio del pantalon ");
	scanf("%d",&p);
	ta= p -(p*0.25);
	printf("\n El precio a pagar con el descuento del 25 porciento es de %d ",ta);
	return 0;
}

