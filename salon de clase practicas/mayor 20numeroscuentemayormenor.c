#include <stdio.h>

int main() {
	int v=0,x=1,contm=0,contne=0,contme=0,contig=0 ;
		for(int x=1;x<=5;x++)
		{
			printf("\n Introduce un numero:\n");
		    scanf("%d",&v);
			if(v<=2 && v>=-4)
			{
				contm++;
			}
			else if(v>0)
			{
				contme++;
			}
			else if(v==0)
			{
				contne++;
			}
			
			else if(v==-10)
			{
				contig++;
			}
		    }
		
		
			printf("Del -10 son: %d \n",contig);
			printf("Neutros son: %d \n",contne);
			printf("Positivos son: %d \n",contme);
			printf("el -2 al -4 son: %d \n",contm);
			
	return 0;
}

