#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	//imprime na tela
	printf("Olá mundo\n");
	
	//definindo variaveis
	int opcao;
	
	//confere e valida a opção
	while(opcao < 1 || opcao > 3){
		//interface de menu
		printf("\nOpção 1");
		printf("\nOpção 2");
		printf("\nOpção 3");
		printf("\nEscolha uma opção: ");
	
		
		//lendo a opção
		scanf("%d", &opcao);
		
		//resultado de acordo com a opção escolhida
		switch(opcao){
			case 1:
				printf("\nOpção 1 foi escolhida\n");
				break;
			case 2:
				printf("\nOpção 2 foi escolhida\n");
				break;
			case 3:
				printf("\nOpção 3 foi escolhida\n");
				break;
			default:
				printf("\nNenhuma opção foi escolhida\n");
				break;
		}
		
	}
	

	
	
	//pausa o programa após execução
	system("pause");
}
