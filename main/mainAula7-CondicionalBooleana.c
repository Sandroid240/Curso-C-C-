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
		printf("\nA � verdadeiro");
	}
	
	//Comparando o 'b'
	if(b){
		printf("\nB � verdadeiro");
	}else{
		printf("\nB � falso");
	}
	
	//comparando uma falsidade
	if(!b){
		printf("\nB � falso");	
	}
	
	
	//imprimi na tela
	printf("\nOl� mundo\n");
	
	//pausa o programa ap�s execu��o
	system("pause");
}
