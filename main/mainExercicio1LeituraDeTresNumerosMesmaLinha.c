#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//Crie um algoritmo que leia tr�s numeros inteiros de uma s� vez
	//Coloque o resultado da multiplica��o 	dos tr�s numeros numa v�riavel
	//Exiba o resultado
	int a, b, c, resultado;
	
	//Entrada e leitura de dados na mesma linha
	printf("Digite tr�s n�meros: ");
	scanf("%d %d %d", &a, &b, &c);
	resultado = a * b * c; 
	
	//Resultado da multiplica��o exibido na tela
	printf("\nA multiplica��o desses tr�s n�meros �: %d", resultado);
}
