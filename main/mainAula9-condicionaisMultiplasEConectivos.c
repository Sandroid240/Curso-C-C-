#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	//Definindo Variáveis
	int a = 20;
	
	/*Conectivo lógico AND (&&) / Se UMA comparação for FALSA, não
	entra no bloco*/ 
	if(a > 5 && a > 15){
		printf("\nA variavel 'a' está entre 5 e 15");
	}
	
	/*Conectivo lógico OR (||) / Se UMA comparação for VERDADEIRA, 
	entra no bloco*/ 
	if(a > 5 || a > 15){
		printf("\nA variavel 'a' é maior 5 ou 15\n");
	}
	
	//Misturando Conectivos 
	if((a > 5 && a < 15 ) || a == 20){
		printf("\nA variavel 'a' é maior 5 ou 15  ou ela vale 20\n");
	}
	
	
	
	
	//Pausa o programa após executar
	system("pause");
}
