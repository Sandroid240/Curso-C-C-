#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3 


void main(){
	setlocale(LC_ALL,"");
	
	//Criar um algoritmo que leia 3 valores para um vetor de 3 posi��es
	//e depois calcular a media dos valores acessando vetor 
	float vetor[TAM], media;
 	int i;
	
	printf("Digite tr�s notas: ");
	
	for(i = 0; i < TAM; i++){
		scanf("%f", &vetor[i]);
	}
	
	for(i = 0; i < TAM; i++){
		printf("\nvetor[%d] = %.2f",i, vetor[i]);
	}
	
	media = (vetor[0] + vetor[1] + vetor[2]) / 3;
	
	printf("\nmedia dos valores acessando os vetores �: %.2f\n", media);
		
	if(media < 6.0){
		printf("\nXiiii! Voc� foi reprovada");
	}else{
		printf("\nParab�ns! Voc� passou no vestibular\n"); 
	}
	system("pause");
}
	/*
	void main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Crie um algoritmo que leia um tamanho um vetor e preencha cada posi��o com um valor
    //depois calcule a m�dia dos valores acessando o vetor.
    int tamanho;
    
    //perguntar o tamanho do vetor 
    printf("Qual ser� o tamanho do vetor?");
    scanf("%d", &tamanho);
 
 	
    float vetor[tamanho], soma; //vaiavel soma ir� armazenar cada valor de leitura somando todos o valores
 
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i]; //somando valor de leitura na variavel soma 
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }
 
    printf("\nA m�dia dos valores �: %.2f", soma/tamanho); //divide a soma dos vetores pelo tamanho do vetor 
 
 	}*/
 
