#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int v1=0,v2=0,v3=0, s=0,m=0, td1=0,td2=0;
		printf("\n Introduce 3 valores: \n");
	scanf("%d %d %d",&v1,&v2,&v3);
	s=v1+v3+v2;
	m=v1*v2*v3;
	td1=s/2;
    td2=m/2;
		printf("\n La suma es: %d ",s);
	    printf("\n La multiplicacion es: %d",m);
		printf("\n la suma dividido entre 2 es: %d",td1);
		printf("\n La multiplicacion entre 2 es: %d",td2);
	getch ();
}

