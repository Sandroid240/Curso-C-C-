#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	/*crie um algoritmo que leia dois valore 
	depois crie um menu (Usando Switch Case) de 4 opções:
	1-somar, 2-Subtrair, 3-Multiplicar, 4-Dividir.
	Após usuario esolher, mostrar o resultado da operação escolhida
	*/
	
	int num1, num2, somar, subtrair, multiplicar, dividir, resto, opcao;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	system("cls");
	
	somar = num1 + num2;
	subtrair = num1 - num2;
	multiplicar = num1 * num2;
	dividir = num1 / num2;
	resto = num1 % num2;
		
	printf("\n\tMenu\n1 - para somar\n2 - para Subtrair\n3 - para multiplicar\n4 - para dividir\n5 - para o resto da divisão\n6 - para saber se seu numero é par ou impar\nDigite a opção: ");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("\nO resultado da SOMA de dois valores é: %d\n", somar);
			break;
		case 2:
			printf("\nO resultado da SUBTRAÇÃO de dois valores é: %d\n", subtrair);
			break;
		case 3:
			printf("\nO resultado da MULTIPLICAÇÃO de dois valores é: %d\n", multiplicar);
			break;
		case 4:
			printf("\nO resultado da DIVISÃO de dois valores é: %d\n", dividir);
			break;
		case 5:
			printf("\nO Resto da divisão entre %d e %d é: %d\n", num1, num2, resto);
			break;
		case 6:
			if(multiplicar % 2 == 0){
				printf("\nO resultado da multiplicação é par\n");
			}else{
				printf("\nO resultado é ímpar\n");
			}
			break;
		default:
			printf("\nOpção invalida");
			break;	
	}	
	system("pause");	
	
}
