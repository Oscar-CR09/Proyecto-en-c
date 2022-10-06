#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[]) {
	int v1=0, v2=0, v3=0, res=0;
	printf("Escribe 2 valores: \n ");
	scanf("%d %d",&v2,&v3);
	printf("selecciona la operacion deseda del menu: \n ");
	printf("*********************** \n");
	printf("1 Suma. \n");
	printf("2 resta. \n");
	printf("3 Multiplicación.\n");
	printf("4 divición \n");
	printf("\n *********************** \n ");
	scanf("%d",&v1);
	switch(v1)
	{
	case 1:
		res=v2+v3;
		break;
	case 2:
			res=v2-v3;
			break;
	case 3:
		res=v2*v3;
		break;
	case 4:
		res=v2/v3;
		break;
		 default:
		 printf(" Error de ingreso, escoja segun el menú: \n Por favor");
	}
	
	printf("\n El resultado de la operación deseada es: %d ", res);
	return 0;
}

