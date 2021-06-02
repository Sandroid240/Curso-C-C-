#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//definindo variaveis
	bool a = true, b = false;
	
	//se 'a' for verdadeiro
	if(a){
		printf("\nA é verdadeiro");
	}
	
	//Comparando o 'b'
	if(b){
		printf("\nB é verdadeiro");
	}else{
		printf("\nB é falso");
	}
	
	//comparando uma falsidade
	if(!b){
		printf("\nB é falso");	
	}
	
	
	//imprimi na tela
	printf("\nOlá mundo\n");
	
	//pausa o programa após execução
	system("pause");
}
