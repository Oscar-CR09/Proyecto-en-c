#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
 int password=2019, intento=3,n=0;
 char usuario[20]="oscar";
#define reset_color "\x1b[0m"
#define negro_T "\x1b[30m"
#define negro_F "\x1b[40m" 
#define rojo_T "\x1b[31m"
#define rojo_F "\x1b[41m"
#define verde_T "\x1b[32m"
#define verde_F "\x1b[42m"
#define amarillo_T "\x1b[33m"
#define amarillo_F "\x1b[43m"
#define magenta_T "\x1b[35m"
#define magenta_F "\x1b[45m"
#define cyan_T "\x1b[36m"
#define cyan_F "\x1b[46m"
#define blanco_T "\x1b[37m"
#define blanco_F "\x1b[47m"
 
 while(intento!=0 && intento!=0)
 {
	 printf("Escribe el nombre de Usuario:");
	 scanf("%s",usuario);
     printf("Escribe contraseña:");
     scanf("%d",&password);

	 if (usuario[20]="oscar" && password==2019) 
		 
	 {
	     printf("Bienvenidos al Sistema \n");
		 system ("pause");
		
	 }
	 else
		 {
		 intento=intento-1;
		 printf("\n Error de ingreso de usuario o contraseña");
		 printf("\n TE QUEDAN %d INTENTOS ",intento);
	 }	 
		 if(intento==0)
		 {
			 printf("Bloqueo de sistema");
		 }
	 }
	 

	getch ();
}

