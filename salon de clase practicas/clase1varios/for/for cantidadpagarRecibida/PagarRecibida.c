#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
 int v1=0,v2=0,res=0;
 for(int x=1;x<=100;x++)
	 printf("\n Ingrese la cantidad a pagar: \n");
  scanf("%d",&v1);
  printf("\n Ingrese la cantidad recibida: \n");
  scanf("%d",&v2);
  if(v1>v2)
  {
	res=v1-v2;
	printf("\n Tu cambio es de: %d", res);
	
  }
  else
	 {
	  printf("\n Gracias por tu visita: ");
	  
     }
  
 
	return 0;
}

