#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int x=0,s=0,ne=0;
	char n[30]="";
	for(int x=1;x<=300;x++)
	{
		printf("\n Introduce el nombre: \n ");
	  scanf("%s",n);
	    printf("\n Introduce el sueldo: \n ");
		scanf("%d",&s);
		
		printf("El nombre y el sueldo es: \n %s %d ",n,s);
		ne=ne+s;
	}
		
	printf("\n La suma de la nomina es: %d ",ne);
	getch;
	
}

