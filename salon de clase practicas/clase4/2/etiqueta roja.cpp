#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main (){
system("color a3");
int op, va, er, desc, vacd, tap=0;
cout<<"desea agregar un articulo? 1.-si     2.- no"<<endl;
cin>>op;
system("cls");
while (op==1){
	cout<<"ingresa el valor del articulo"<<endl;
	cin>>va;
	cout<<"¿El producto es de etiqueta roja?    1=si  2=no"<<endl;
	cin>>er;
	system("cls");
	if  (er==1){
	   desc=va*.20;
	   vacd=va-desc;
	   tap=tap+vacd;
	   cout<<"¿desea seguir agregando articulo?   1=si    2=no"<<endl;
	   cin>>op;
	   system("cls");
	}
	   
	else{
		tap=tap+va;
	    cout<<"¿desea seguir agregando articulo?   1=si    2=no"<<endl;
		cin>>op;
		system("cls");
	}
		
}
	
cout<<"el total a pagar es de "<< tap<<endl;
}

	
	
	
