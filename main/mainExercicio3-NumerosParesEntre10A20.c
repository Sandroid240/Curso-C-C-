#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	int i, valor1;
	
	printf("Numeros pares com For");
	for(i = 10; i <= 20; i++){
		if(i % 2 == 0){
		printf("\n%d", i);
		}
	}
	
	printf("\nNumeros ímpares com For");
	for(i = 10; i <= 20; i++){
		if(i % 2 == 1){
		printf("\n%d", i);
		}
	}
	
	printf("\nNumeros ímpares com While");
	//resetando variavel e atribuindo valor
	i = 10; 
	while(i <= 20){
		if(i % 2 == 1){
	 		 printf("\n%d", i);
		}
		i++;
	}
	
	printf("\nNumeros pares com Do...While");
	//resetando variavel e atribuindo valor 
	i=10;
	do{
		if(i % 2 == 0){
			 printf("\n%d", i);
		}
		i++;
	}while(i <= 20);
	
	//verificar se valor é par ou ímpar
	printf("\nDigite um valor: ");
	scanf("%d", &valor1);
	do{
		if(valor1 % 2 == 1){
			printf("  %d É ímpar\n", valor1);
		}else{
			printf("  %d É Par\n", valor1);
		}
		i++;
	}while(i <= 20);
	
	system("pause");
}
