#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) 
    {
	int x=0,area=0,area1=0,area2=0,area3=0,area4=0,pre=0;
	for(int x=1;x<=500;x++)
	{
	printf("Selecciona en el menu el area del concierto que quieres estar: \n ");
	printf("\n *************************************************************** \n ");
	printf("\n area 1: $200 \n ");
	printf("\n area 2: $400 \n ");
	printf("\n area 3: $600 \n ");
	printf("\n area 4: $800 \n ");
	printf("\n *************************************************************** \n ");
	
	scanf("%d",&area);
	
	switch(area)
	{
	case 1:
		
		pre=pre+200;
		area1++;
		
	case 2:
		
		pre=pre+400;
		area2++;
		
	case 3:
		
		pre=pre+600;
		area3++;
		
	case 4:
		
		pre=pre+800;
		area4++;
		
	default:
		
		printf("Error de ingreso de datos:");
		
			
	}
	printf("Total vendido por areas y total recaudado es: %d %d %d %d %d ",area1,area2,area3,area4,pre);
	
	
	
	}
	getch;
}

