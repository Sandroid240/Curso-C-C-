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
	
	printf("\nNumeros �mpares com For");
	for(i = 10; i <= 20; i++){
		if(i % 2 == 1){
		printf("\n%d", i);
		}
	}
	
	printf("\nNumeros �mpares com While");
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
	
	//verificar se valor � par ou �mpar
	printf("\nDigite um valor: ");
	scanf("%d", &valor1);
	do{
		if(valor1 % 2 == 1){
			printf("  %d � �mpar\n", valor1);
		}else{
			printf("  %d � Par\n", valor1);
		}
		i++;
	}while(i <= 20);
	
	system("pause");
}
