#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
  int v1=0,ta=0,pr=0,desc=0;
  printf("seleccionar el menu de productos deseado: \n ");
  printf("\n ************************************** \n ");
  printf("\n clave 235 - refrigerador - $7 000: \n ");
  printf("\n clave 242 - microondas - $3500 \n ");
  printf("clave 386 - minicomponente - $6200 \n ");
  printf("clave 542 - Estufa - $6400 \n ");
  printf("\n ************************************** \n ");
  scanf("%d",&v1);
  printf("\n Temporada alta teclee Numero 1: \n ");
  printf("\n Para temporada baja teclee cualquier tecla: \n ");
  scanf("%d",&ta);
  if(v1==235 && ta==1)
  {
	  pr=7000*.10;
	  desc=7000-pr;
  }
  else if (v1==242 && ta==1 )
  {
	  pr=3500*.10;
	 desc=3500-pr;
  }
  else if (v1==386 && ta==1)
  {
	  pr=6200*.10;
	  desc=6200-pr;
	  
  }
  else if (v1==542 && ta==1)
  {
	  pr=6400*.10;
	  desc=6400-pr;
	  
  }
    
  
  if(v1==235 && ta>1)
  {
	  pr=7000*.05;
	  desc=7000-pr;
  }
  else if (v1==242 && ta>1)
  {
	  pr=3500*.05;
	  desc=3500-pr;
  }
  else if (v1==386 && ta>1)
  {
	  pr=6200*.05;
	  desc=6200-pr;
	  
  }
  else if (v1==542 && ta>1)
  {
	  pr=6400*.05;
	  desc=6400-pr;
	  
  }
  else
  {
	  printf("\n Ingreso de clave erroneo ingresa el indicado: \n");
	  
  }	 

  printf("\n El total a pagar con descuento respectivo es de: %d", desc);
	getch () ;
}

