#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	/*crie um algoritmo que leia dois valore 
	depois crie um menu (Usando Switch Case) de 4 op��es:
	1-somar, 2-Subtrair, 3-Multiplicar, 4-Dividir.
	Ap�s usuario esolher, mostrar o resultado da opera��o escolhida
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
		
	printf("\n\tMenu\n1 - para somar\n2 - para Subtrair\n3 - para multiplicar\n4 - para dividir\n5 - para o resto da divis�o\n6 - para saber se seu numero � par ou impar\nDigite a op��o: ");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("\nO resultado da SOMA de dois valores �: %d\n", somar);
			break;
		case 2:
			printf("\nO resultado da SUBTRA��O de dois valores �: %d\n", subtrair);
			break;
		case 3:
			printf("\nO resultado da MULTIPLICA��O de dois valores �: %d\n", multiplicar);
			break;
		case 4:
			printf("\nO resultado da DIVIS�O de dois valores �: %d\n", dividir);
			break;
		case 5:
			printf("\nO Resto da divis�o entre %d e %d �: %d\n", num1, num2, resto);
			break;
		case 6:
			if(multiplicar % 2 == 0){
				printf("\nO resultado da multiplica��o � par\n");
			}else{
				printf("\nO resultado � �mpar\n");
			}
			break;
		default:
			printf("\nOp��o invalida");
			break;	
	}	
	system("pause");	
	
}
