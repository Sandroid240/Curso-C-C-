#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	//Definindo Vari�veis
	int a = 20;
	
	/*Conectivo l�gico AND (&&) / Se UMA compara��o for FALSA, n�o
	entra no bloco*/ 
	if(a > 5 && a > 15){
		printf("\nA variavel 'a' est� entre 5 e 15");
	}
	
	/*Conectivo l�gico OR (||) / Se UMA compara��o for VERDADEIRA, 
	entra no bloco*/ 
	if(a > 5 || a > 15){
		printf("\nA variavel 'a' � maior 5 ou 15\n");
	}
	
	//Misturando Conectivos 
	if((a > 5 && a < 15 ) || a == 20){
		printf("\nA variavel 'a' � maior 5 ou 15  ou ela vale 20\n");
	}
	
	
	
	
	//Pausa o programa ap�s executar
	system("pause");
}
