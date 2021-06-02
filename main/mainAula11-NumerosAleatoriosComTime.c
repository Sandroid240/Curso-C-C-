#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
	setlocale(LC_ALL,"");
	//imprime na tela apenas pra verificar se n�o tem nada de errado
	printf("Ol� mundo!");
	
	//respons�vel por alimentar o rand(random) de forma diferente
	srand((unsigned) time(NULL));
	
	//vari�vel que recebe o resto da divis�o do numero por 3 (aleatorio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//vari�vel que recebe o resto da divis�o do numero por 5 (aleatorio entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) + 1; 
	
	//imprime o valor
	printf("\n%d\n", aleatorio);
	
	//imprime a segunda variavel
	printf("\n%d\n", aleatorioSegundo);	
	
	//mesma variavel, s� que o embaralhamento do numero muda 
	aleatorioSegundo = (rand() % 5) + 1; 
	
	//imprime mesma variavel, mas imprime numero diferente
	printf("\n%d\n", aleatorioSegundo);
		
	//Pausa o programa ap�s executar
	system("pause");
}
