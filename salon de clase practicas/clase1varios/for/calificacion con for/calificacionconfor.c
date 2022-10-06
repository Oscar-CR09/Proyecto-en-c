#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int n=0,r=0,c=0,x=1;
	for(int x=1;x<=5;x++)
{
	printf("Ingrese 5 calificaciones");
	scanf("%d",&n);
	c=c+n;
}
	r=c/5;
	printf("\n el promedio es de: %d ", r);
	
	return 0;
}

