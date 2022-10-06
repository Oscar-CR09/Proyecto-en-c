#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
 int n=0,cinco=0,veinte=0,treinta=0,cincuenta=0,secenta=0,menoscinco=0,menosdiez=0,total=0,op=0;
	 printf("Ingrese un numero:");
	 
     scanf("%d",&n);
	 
	 system("cls");
	 
	 while (n!=0)
	 {
		 if (n>=5 && n<=10)
		 {
			 cinco++;
			 total++;
		 }
		  else if (n>=20 && n<=25)
		 {
			 veinte++;
			 total++;
		 }
		  else if(n>=30 && n<=35)
		 {
			 treinta++;
			 total++;
		 }
		  else if(n==50)
		 {
			 cincuenta++;
			 total++;
		 }
		  else if(n==60)
		 {
			 secenta++;
			 total++;
		 }
		  else if(n==-5)
		 {
			 menoscinco++;
			 total++;
		 }
		  else if (n==-10)
		 {
			 menosdiez++;
			 total++;
		 }
	 
		 printf("Ingrese un numero:");
		  
		  scanf("%d",&n);
		 system("cls");
	 }
	 printf("\n El total de numeros de 5-10   es de: %d ",cinco);
	 printf("\n El total de numeros de 20-25  es de: %d ",veinte);
	 printf("\n El total de numeros de 30-35  es de: %d ",treinta);
	 printf("\n El total de numeros de 50     es de: %d ",cincuenta);
	 printf("\n El total de numeros de 60     es de: %d ",secenta);
	 printf("\n El total de numeros de -5     es de: %d ",menoscinco);
	 printf("\n El total de numeros de -10    es de: %d ",menosdiez);
	 printf("\n El total de numeros           es de: %d ",total);
	 
	getch ();
}

