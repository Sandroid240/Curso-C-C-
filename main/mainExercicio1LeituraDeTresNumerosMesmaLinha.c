#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//Crie um algoritmo que leia três numeros inteiros de uma só vez
	//Coloque o resultado da multiplicação 	dos três numeros numa váriavel
	//Exiba o resultado
	int a, b, c, resultado;
	
	//Entrada e leitura de dados na mesma linha
	printf("Digite três números: ");
	scanf("%d %d %d", &a, &b, &c);
	resultado = a * b * c; 
	
	//Resultado da multiplicação exibido na tela
	printf("\nA multiplicação desses três números é: %d", resultado);
}
