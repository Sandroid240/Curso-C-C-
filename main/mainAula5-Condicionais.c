#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//Definindo vari�vies
	int a = 5, opcao = 3; 
	float b = 2.5;
	char c = 'x';
	
	//Condicional simples
	if (a == 5){
		printf("\nA variavel a � igual a 5");
	}
	
	if (b == 2.5){
		printf("\nA variavel b � igual a = 2.5");
	}
	
	if(c == 'x'){
		printf("\nA variavel c � letra = x");
	}
	
	//Numero par ou impar
	if (a % 2 == 0){
		printf("\nA variavel a � par");
	}else{
		printf("\nA variavel a � impar");
	}
	
	//condicional composta
	if( opcao == 1){
		printf("\nA opcao � igual a 1");
	} else if (opcao == 2){
		printf("\nA opcao � igual a 2");
	}else{
		printf("\nA opcao n�o � igual a 1 e nem 2");
	}
	
	printf("\nOl� mundo");
	
	//Pausa o programada ap�s executar
	system("pause");
}
