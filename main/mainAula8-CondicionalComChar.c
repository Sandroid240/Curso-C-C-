#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

//fun��o principal do programa
void main(){
	setlocale(LC_ALL,"");
	
	//definindo variaveis
	char letra = 'x';
	
	//condicional simples
	if (letra == 'x'){
		printf("\nA letra � x\n");
		printf("\nO c�digo da variavel letra �: %d\n", letra);
	}
	
	//condicional usando c�digo de letra
	if (letra == 120){
		printf("\n A letra � x\n");
	}
	
	
	
	
	system("pause");
}
