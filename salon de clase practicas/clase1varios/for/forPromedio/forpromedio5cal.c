#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int n=0,r=0,c=0;
for(int x=1;x<=5;x++)
{
	printf("Introduce 5 calificaciones: ");
	scanf("%d",&n);
	c=c+n;
	
}

r=c/5;
printf("\n El promedio es de: %d",r);
	getch;
	
}

