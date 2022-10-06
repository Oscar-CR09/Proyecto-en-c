#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
int n1=0,n2=0,res=0,x=1;
for(int x=1; x<=20; x++)
{
	printf("Ingresa tus numeros a sumar \n ");
	scanf("%d %d \n",&n1,&n2);
	res=n1+n2;
	printf("\n tu resultado es: %d \n ", res);
}
    
	getchar ();
}

