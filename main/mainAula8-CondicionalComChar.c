#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

//função principal do programa
void main(){
	setlocale(LC_ALL,"");
	
	//definindo variaveis
	char letra = 'x';
	
	//condicional simples
	if (letra == 'x'){
		printf("\nA letra é x\n");
		printf("\nO código da variavel letra é: %d\n", letra);
	}
	
	//condicional usando código de letra
	if (letra == 120){
		printf("\n A letra é x\n");
	}
	
	
	
	
	system("pause");
}
