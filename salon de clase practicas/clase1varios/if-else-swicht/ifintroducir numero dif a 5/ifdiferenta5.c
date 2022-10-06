#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int a=0,c=0;
	printf("Introducir un numero diferente al 5: \n ");
	scanf("%d",&a);
	if (a>5)
	 {c=a+3;
	printf(" \n El resultado fue mayor que 5:");
	printf("\n se le sumo 3: %d",c);
	}
	else
		{
		c=a-2;
	printf(" \n El resultado fue menor que 5:");
	printf("\n se le resto 2: %d",c);
	}
	return 0;
}

