#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main(){
	
	setlocale(LC_ALL, "");
	
	//Criando Vetor
	int vetor[TAM], i;
	
	//Passando valores para o vetor 
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;
	
	//Adiciona 1 para cada posi��o 
	for(i=0; i < TAM; i++){
		vetor[i] = vetor[i]+1; 
	}
	
	//imprimindo vetores
	printf("Posi��o[0]:%d \nPosi��o[1]:%d \nPosi��o[2]:%d ", vetor[0], vetor[1], vetor [2]);
	
	
	//imprimindo vetores em um la�o de repeti��o 
	for(i=0; i < TAM; i++){
		printf("Posi��o %d : %d\n",i , vetor[i]);
	}
	
	//Lendo 3 valores para o vetor 
	//Modifica os valores dos vetores 
	for(i=0; i < TAM; i++){
		scanf("%d", &vetor[i]); 
	}
	
	//imprimindo vetores em um la�o de repeti��o 
	for(i=0; i < TAM; i++){
		printf("Posi��o %d : %d\n",i , vetor[i]);
	}
	
	
	system("pause");
	
	
}
