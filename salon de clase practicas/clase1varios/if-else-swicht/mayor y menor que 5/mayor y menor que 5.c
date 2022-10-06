#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int v1=0,ts=0,tr=0;
	printf("\n Introduce un valor diferente a 5");
	scanf("%d",&v1);
	if(v1>5)
	{
		ts=v1+3;
		printf("\n El resultado fue mayor que 5 se le sumo 3: %d",ts);
	}
	else
	   {
		tr=v1-2;
			printf("\n El resultado fue menor que 5 se le resto 2: %d", tr);
	}
	
	return 0;
}

