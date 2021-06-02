#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	//definindo variavel
	int a = 1, b = 10;
	
	//contando até 10
	while(a <= 10){
		
		//imprime na tela
		printf("\n%d\n", a);
		
		//incrementação
		a++; //a = a + 1; 
		
	}
	
	//contagem regressiva
	while(b >= 1){
		
		//imprime na tela
		printf("\n\t%d\n", b);
		
		//decrementação
		b--; //b = b - 1; 
	}
	
	//pausa programa após execução
	system("pause");
}
