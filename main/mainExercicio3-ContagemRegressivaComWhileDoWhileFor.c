#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que imprima os numeros de 10 até 0
	de forma regressiva usando(While, Do While e For)
	*/
	
	int cont= 10;
	
	//For
	printf("Contagem Regressiva com FOR");
	for(cont = 10; cont >= 0; cont-- ){
		printf("\n%d\n", cont);
	}
	
	//resetando valor da variavel para reutilizar no Do...While
	cont= 10;
	
	//Do...While
	printf("\nContagem Regressiva com Do While");
	do{
		printf("\n%d\n", cont);
		cont--;
	}while(cont >= 0);
	
	cont=10;
	//While
	printf("\nContagem Regressiva com While");
	while(cont >= 0){
		printf("\n%d\n", cont);
		cont--;
	}
	
	
	

	
	system("pause");
}
