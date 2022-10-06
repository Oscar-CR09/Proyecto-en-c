#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int c1,c2,c3,pr;
	printf("\n Introduce 3 calificaciones:");
	scanf("%d %d %d",&c1,&c2,&c3);
	pr=(c1+c2+c3)/3;
	printf("\n El promedio es de: %d" , pr);
	
	return 0;
}

