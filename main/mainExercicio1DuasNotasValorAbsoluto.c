#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
	//uso de acentos
	setlocale(LC_ALL,"");
	
	
	int nota1, nota2, resultado;
	
	//Entrada e Leitura de dados
	printf("Digite a nota 1: ");
	scanf("%d", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%d", &nota2);
	resultado = nota1 - nota2;
	
	//Mostra resultado 
	printf("\n\nResultado é: %d", resultado);
	
	//Mostra resultado positivo
	printf("\n\nO valor absoluto de resultado é: %d", abs(resultado)); 
	
	
}
