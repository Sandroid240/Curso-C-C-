#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main(){
	
	//definindo variavel
	int i;
	
	//imprime a constante na tela
	printf("%d\n", TAM);
	
	for(i = 0; i <= TAM; i++){
		printf("\n%d\n", i);
	}
	
	//Pausa o programa após a execução
	system("pause");
}
