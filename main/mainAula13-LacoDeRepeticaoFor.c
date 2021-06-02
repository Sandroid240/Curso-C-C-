#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	//definindo variaveis 
	
	int i, num, tabuada;

	printf("Digite o numero para exibir a tabuada: ");
	scanf("%d", &num);
	
	tabuada = num * i;
	
	//tabuada
	for(i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", num, i, num * i);
	}
	
	
	//tabuada do 5
	for(i = 1; i <= 10; i++){
		printf("\n5 X %d = %d\n", i, 5 * i);
	}
	
	//contando de 2 em 2
	for( i = 0; i <= 10; i=i+2){
		printf("\n%d", i);
	}
	
	//contagem regressiva
	for(i = 10; i >= 0; i--){
		printf("\n%d\n", i);
	}
	
	
	system("pause");
}
