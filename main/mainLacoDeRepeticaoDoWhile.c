#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	//definindo variavel
	int a = 1, b = 10;
	
	//contando até 10
	//primeiro confere a condição e depois executa
	while(a <= 10){
		
		//imprime na tela
		printf("\n%d\n", a);
		
		//incrementação
		a++; //a = a + 1; 
	}
	
	//alterando valor de a
	a = 20; 
	
	//executa uma vez e depois confere a condição
	do{
		printf("\n%d\n", a);
		a++;
		
	}while (a <= 10);
	
	//contagem regressiva
	/*while(b >= 1){
		
		//imprime na tela
		printf("\n\t%d\n", b);
		
		//decrementação
		b--; //b = b - 1; 
	}
	*/
	
	//pausa programa após execução
	system("pause");
}
