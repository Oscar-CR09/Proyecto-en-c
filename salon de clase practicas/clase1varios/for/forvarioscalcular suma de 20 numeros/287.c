#include <stdio.h>
#include <conio.h>
int main() {
	int var=2;
	for (int x=1; x<=287; x++)
	{
		printf("\t%d",var)
			var=var+4;
		printf("\t%d",var);
		var=var-2;
		printf("\t%d",var);
		var=var+5;
	}
	return 0;
}

