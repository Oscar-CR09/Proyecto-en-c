#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int c1=0,c2=0,c3=0,c4=0,p=0;
	printf("Introduce 4 calificaciones: \n");
	scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
	p=(c1+c2+c3+c4)/4;
	if (p>=7)
	{
		printf("Su promedio es aprobatorio: APROBADO: CALIFICACION DE: %d",p);
	}
	else
		{
		printf("Su promedio es reprobatorio: REPROBADO: CALIFICACION DE:  %d",p);
	}
	getch ();
}

