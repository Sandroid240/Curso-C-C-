#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//definindo variáveis
	int a;
	char letra;
	
	printf("Digite um numero de 1 a 3: ");
	scanf("%d", &a);
	
	
	/*
	if (a == 1){
		printf("\nOpção escolhida: 1\n");
		
	}else if (a == 2){
		printf("\nOpção escolhida: 2\n");
		
	}else if(a==3){
		printf("\nOpção escolhida: 3\n");
		
	}else{
		printf("\nOpção invalida\n");
	}
	*/
	
	switch(a){
		case 1:
			printf("\nOpção escolhida: 1\n");
			break;
		case 2:
	        printf("\nOpção escolhida: 2\n");
			break;
		case 3:
			printf("\nOpção escolhida: 3\n");
			break;
		default:
			printf("\nOpção invalida\n");
			break;				
	}
	
	system("pause");
	system("cls");	
	fflush(stdin);
	
	printf("Digite um letra entre A e D: ");
	scanf("%c", &letra);
	
		switch(letra){
		case 'a':
			printf("\nOpção escolhida: A\n");
			break;
		case 'b':
	        printf("\nOpção escolhida: B\n");
			break;
		case 'c':
			printf("\nOpção escolhida: C\n");
			break;
		case 'd':
			printf("\nOpção escolhida: D\n");
			break;
		default:
			printf("\nOpção invalida\n");
			break;				
	}
	
	
	
	system("pause");
}
