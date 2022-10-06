#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int pr=0, pd=0;
	printf("\n Introduce el precio del pantalon:");
	scanf("%d",&pr);
	pd=pr*.25;
	printf("\n El resultado del descuento del 25 porciento es de %d ",pd);
	return 0;
}

