#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//Definindo variávies
	int a = 5, opcao = 3; 
	float b = 2.5;
	char c = 'x';
	
	//Condicional simples
	if (a == 5){
		printf("\nA variavel a é igual a 5");
	}
	
	if (b == 2.5){
		printf("\nA variavel b é igual a = 2.5");
	}
	
	if(c == 'x'){
		printf("\nA variavel c é letra = x");
	}
	
	//Numero par ou impar
	if (a % 2 == 0){
		printf("\nA variavel a é par");
	}else{
		printf("\nA variavel a é impar");
	}
	
	//condicional composta
	if( opcao == 1){
		printf("\nA opcao é igual a 1");
	} else if (opcao == 2){
		printf("\nA opcao é igual a 2");
	}else{
		printf("\nA opcao não é igual a 1 e nem 2");
	}
	
	printf("\nOlá mundo");
	
	//Pausa o programada após executar
	system("pause");
}
