#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//definindo vari�veis
	int a;
	char letra;
	
	printf("Digite um numero de 1 a 3: ");
	scanf("%d", &a);
	
	
	/*
	if (a == 1){
		printf("\nOp��o escolhida: 1\n");
		
	}else if (a == 2){
		printf("\nOp��o escolhida: 2\n");
		
	}else if(a==3){
		printf("\nOp��o escolhida: 3\n");
		
	}else{
		printf("\nOp��o invalida\n");
	}
	*/
	
	switch(a){
		case 1:
			printf("\nOp��o escolhida: 1\n");
			break;
		case 2:
	        printf("\nOp��o escolhida: 2\n");
			break;
		case 3:
			printf("\nOp��o escolhida: 3\n");
			break;
		default:
			printf("\nOp��o invalida\n");
			break;				
	}
	
	system("pause");
	system("cls");	
	fflush(stdin);
	
	printf("Digite um letra entre A e D: ");
	scanf("%c", &letra);
	
		switch(letra){
		case 'a':
			printf("\nOp��o escolhida: A\n");
			break;
		case 'b':
	        printf("\nOp��o escolhida: B\n");
			break;
		case 'c':
			printf("\nOp��o escolhida: C\n");
			break;
		case 'd':
			printf("\nOp��o escolhida: D\n");
			break;
		default:
			printf("\nOp��o invalida\n");
			break;				
	}
	
	
	
	system("pause");
}
