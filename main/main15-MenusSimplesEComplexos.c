#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	//imprime na tela
	printf("Ol� mundo\n");
	
	//definindo variaveis
	int opcao;
	
	//confere e valida a op��o
	while(opcao < 1 || opcao > 3){
		//interface de menu
		printf("\nOp��o 1");
		printf("\nOp��o 2");
		printf("\nOp��o 3");
		printf("\nEscolha uma op��o: ");
	
		
		//lendo a op��o
		scanf("%d", &opcao);
		
		//resultado de acordo com a op��o escolhida
		switch(opcao){
			case 1:
				printf("\nOp��o 1 foi escolhida\n");
				break;
			case 2:
				printf("\nOp��o 2 foi escolhida\n");
				break;
			case 3:
				printf("\nOp��o 3 foi escolhida\n");
				break;
			default:
				printf("\nNenhuma op��o foi escolhida\n");
				break;
		}
		
	}
	

	
	
	//pausa o programa ap�s execu��o
	system("pause");
}
