#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	
	//Crie um algoritmo que informe se um numero é primo ou não

	//Variaveis
	int i, numero, aux = 0; //aux é uma variavel auxiliar
	
	//Usuario Digita um numero
	printf("Digite um numero para saber se é primo: ");
	scanf("%d", &numero);
	
	//Loop para saber se o numero é primo 
	for(i= 1; i <= numero; i++)
	{
		//Conferindo quantas vezes houve divisibilidade
		if(numero % i == 0){
			aux++;
		}
		//Exibe numero primo na tela
		printf("%d / %d tem resto igual a = %d \n",numero, i, numero%i);
	}
	
	if(aux == 2){
		printf("O número é primo\n");
	}else{
		printf("O Número não é primo, pois ele tem %d divisores\n", aux);
	}
	
	system("pause");
}
