#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int n=0, x=1, s=0;
    for(int x=1;x<=20;x++)
	{
	printf("Ingrese un numero");
	scanf("%d",&n);
	s=s+n;
	} 
	
	printf("\n La suma de 20 numeros es: %d",s);
	getchar ();
}

