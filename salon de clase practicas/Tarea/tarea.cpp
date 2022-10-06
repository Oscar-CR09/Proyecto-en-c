#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int password=2019, opc, si=60000, opw=1, re, ie, opp, pa, dpa, pat, pt, dpt,ptt, pv, dpv, pvt, oportunidades=3;
	char usuario[20]="oscar";
	printf("*********************************************************************************************");
	printf("Bienvenido al Programa de Upem\n");
	printf("*********************************************************************************************");
	printf("\n Tienes 3 intentos para ingresar tu usuario y contraseña si no el sistema sera bloqueado\n");
	printf("*********************************************************************************************");
	while(oportunidades!=0 && opw==1){
		printf("\n Para hacer tu operacion por favor escriba su usuario y contraseña \n");
		scanf("%s", & usuario);
		scanf("%d", & password);
		system("cls");
		if(usuario[20]="oscar" && password==2019){
			
		printf("\nUsuario y password correctos\n");
			printf("\n¿Que operacion desea hacer en este momento?\n");
			printf("***************************************");
			printf("\n1.-Consultar saldo (cobro por operacion $15)\n");
			printf("\n2.-Consular numero de cuenta\n");
			printf("\n3.-Retiro de efectivo\n");
			printf("\n4.-Deposito de dinero a cuenta\n");
			printf("\n5.-Realizar pago\n");
			printf("***************************************");
			scanf("%d", & opc);
			system("cls");
			
			switch(opc){
			case 1:
				si=si-15;
				printf("\nSu saldo es de %d\n",si);
				printf("¿desea realizar otra operacion?\n");
				printf("\n1.-Si   2.-No\n");
				scanf("%d", & opw);
				system("cls");
				break;
			case 2:
				printf("\nSu numero de cuenta es 4915665024358976\n");
				printf("¿desea realizar otra operacion?\n");
				printf("\n1.-Si   2.-No\n");
				scanf("%d", & opw);
				system("cls");
				break;
			case 3:
				printf("\nIngresa cuanto deseas retirar\n");
				scanf("%d", & re);
				if(re>si){
					printf("usted no tiene esa cantidad en su cuenta\n");
					printf("¿desea continuar con su  operacion?\n");
					printf("\n1.-Si   2.-No\n");
					scanf("%d", & opw);
					system("cls");
				}
				else{	
					si=si-re;
					printf("su saldo es de %d\n",si);
					printf("¿desea realizar otra operacion?\n");
					printf("\n1.-Si   2.-No\n");
					scanf("%d", & opw);
					system("cls");
				}
				break;
			case 4:
				printf("\nIngresa el monto a ingresar\n");
				scanf("%d", & ie);
				si=si+ie;
				printf("su nuevo saldo es de %d\n", si);
				printf("¿desea realizar otra operacion?\n");
				printf("\n1.-Si   2.-No\n");
				scanf("%d", & opw);
				system("cls");
				break;
			
			case 5:
				printf("\n¿Que tipo de pago deseas hacer?\n");
				printf("\n6.-Agua\n");
				printf("\n7.-Telefono\n");
				printf("\n8.-Tv de paga\n");
				scanf("%d",& opp);
				switch(opp){
				
				case 6:
					printf("\nIngresa el monto que deseas pagar\n");
					scanf("%d", & pa);
					if(pa>si){
						printf("no tienes esa cantidad");
						printf("¿desea continuar con su  operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					else
					if(pa>6000){
						dpa=pa*.05;
						pat=pa-dpa;
						si=si-pat;
						printf("su nuevo saldo ya con el pago con descuento es de %d\n", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					else{
						si=si-pa;
						printf("su nuevo saldo ya con el pago es de %d", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					break;
				case 7:
					printf("\nIngresa el monto que deseas pagar\n");
					scanf("%d", & pt);
					if(pt>si){
						printf("no tienes esa cantidad\n");
						printf("¿desea continuar con su  operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					else
					if(pt>6000){
						dpt=pt*.05;
						ptt=pt-dpt;
						si=si-ptt;
						printf("su nuevo saldo ya con el pago con descuento es de %d\n", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					else{
						si=si-pt;
						printf("su nuevo saldo ya con el pago es de %d\n", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					break;
				case 8:
					printf("\nIngresa el monto que deseas pagar\n");
					scanf("%d", & pv);
					if(pv>si){
						printf("no tienes esa cantidad\n");
						printf("¿desea continuar con su  operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					else
					if(pv>6000){
						dpv=pv*.05;
						pvt=pv-dpv;
						si=si-pvt;
						printf("su nuevo saldo ya con el pago con descuento es de %d\n", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
						
					}
					else{
						si=si-pv;
						printf("su nuevo saldo es de %d", si);
						printf("¿desea realizar otra operacion?\n");
						printf("\n1.-Si   2.-No\n");
						scanf("%d", & opw);
						system("cls");
					}
					break;
				default:
					printf("ingresa opcion valida");
					printf("¿desea continuar con su operacion?\n");
					printf("\n1.-Si   2.-No\n");
					scanf("%d", & opw);
					system("cls");
						
					}
				break;
			default:
				printf("ingresa opcion valida\n");
				printf("¿desea continuar con su operacion?\n");
				printf("\n1.-Si   2.-No\n");
				scanf("%d", & opw);
				system("cls");
			}
			
	
	}
		else {
			oportunidades=oportunidades-1;
			printf("Te quedan %d intentos\n", oportunidades);
		}
		
	}	
	
	printf(" Vuelva pronto UPEM \n");
	
	
	
	
		
		if(oportunidades==0){
			printf("Agotaste tus 3 oportunidades sistema bloqueado");
	}
}
	
	   
	   


