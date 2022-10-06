#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	char nombre [20] = "" ;
    printf("ingrese su nombre");
	scanf("%s", nombre);
	for(int x=0; x<=19; x++)
	{
		printf("%s \n",nombre);
	}
	return 0;
}

