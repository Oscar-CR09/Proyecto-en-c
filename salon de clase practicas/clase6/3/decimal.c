/*
13.- La C�a. Automovil�stica Mexicana, S.A. de C.V premia anualmente a sus mejores vendedores de acuerdo
a la siguiente tabla:
Si vendi� Le corresponde de Comisi�n
sobre ventas totales
1,000,000 <= v < 3,000,000 3%
3,000,000 <= v < 5,000,000 4%
5,000,000 <= v < 7,000,000 5%
7,000,000 <= v 6%
Dise�ar un pseudoc�digo que lea las ventas de 100 vendedores y que escriba la comisi�n anual que le
corresponda a cada vendedor. Suponer que nadie vende m�s de 10,000,000 al a�o.

*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()
{
	system("color f1");
	int ventas,x;
	int total;
	
	for(int x=1;x<=10;x++)
		
		printf("Ingresa la cantidad que vendio un vendedor: ");
	    scanf("%d",&ventas);
		
	 if(ventas>=1000000 || ventas<3000000)
	  {
		total=ventas*.03;
	  }
		 if(ventas>=3000000 || ventas<5000000)
	     {
		   total=ventas*.04;
	     }
	         if(ventas>=5000000 || ventas<7000000)
	          {
		       total=ventas*.05;
	          }
				    if(ventas>=7000000 || ventas<1000000)
	                 {
		              total=ventas*.06;
		             } 
				     
					 else
					   {
						printf("Error de ingreso de datos:");
					   }

}
printf("");

	getch ();
	
}
