#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	//Para usar acentos
	setlocale(LC_ALL, "");
	
	//Crie um algoritmo que leia 3 notas e calcule a media
	//Se o valor for maior ou igual a 7 informe que o aluno foi aprovado
	//sen�o, foi reprovado
	
	float n1, n2, n3, resultado;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
	
	resultado = (n1 + n2 + n3) / 3;
	printf("\nSua media �: %.1f", resultado);
	
	if(resultado >= 7){
		printf("\n\nParab�ns, voc� foi aprovado!\n\n");
	}else{
		printf("\n\nInfelizmente, voc� foi reprovado :(\n\n");
	}
	
	system("pause");
	
}
