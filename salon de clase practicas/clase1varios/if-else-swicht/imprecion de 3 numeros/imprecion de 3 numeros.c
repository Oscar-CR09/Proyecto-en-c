#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int v1=0,v2=0,v3=0,s=0,m=0,ts=0,tm=0;
	printf("\n Introduce 3 valores:");
	scanf("%d %d%d",&v1,&v2,&v3);
	s=v1+v2+v3;
	m=v1*v2*v3;
	ts=s/2;
	tm=m/2;
	printf("\n El resultado de la suma es de: %d ",s);
	printf("\n El resultado de la multiplicacion es: % d ",m);
	printf("\n El resultado de la suma dividido entre 2 es : %d ",ts);
	printf("\n El resultado de la multiplicacion entre 2 es: %d ",tm);
	
	return 0;
}

