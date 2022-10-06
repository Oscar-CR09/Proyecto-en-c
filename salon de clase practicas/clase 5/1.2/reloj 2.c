#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main (){
	
	int h, m, s;
	
	for(h=0; h<23; h++) {
		
		for(m=0; m<60; m++){
			
			for(s=0; s<60; s++){
				system("cls");
				printf("%d :" "%d :",&h,&m,&s );
				
				Sleep(1000);
				
			}
		}
		
		
	}
}
