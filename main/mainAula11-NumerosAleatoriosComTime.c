#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
	setlocale(LC_ALL,"");
	//imprime na tela apenas pra verificar se não tem nada de errado
	printf("Olá mundo!");
	
	//responsável por alimentar o rand(random) de forma diferente
	srand((unsigned) time(NULL));
	
	//variável que recebe o resto da divisão do numero por 3 (aleatorio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//variável que recebe o resto da divisão do numero por 5 (aleatorio entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) + 1; 
	
	//imprime o valor
	printf("\n%d\n", aleatorio);
	
	//imprime a segunda variavel
	printf("\n%d\n", aleatorioSegundo);	
	
	//mesma variavel, só que o embaralhamento do numero muda 
	aleatorioSegundo = (rand() % 5) + 1; 
	
	//imprime mesma variavel, mas imprime numero diferente
	printf("\n%d\n", aleatorioSegundo);
		
	//Pausa o programa após executar
	system("pause");
}
