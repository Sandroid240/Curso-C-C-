#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	//definindo variavel
	int a = 1, b = 10;
	
	//contando at� 10
	//primeiro confere a condi��o e depois executa
	while(a <= 10){
		
		//imprime na tela
		printf("\n%d\n", a);
		
		//incrementa��o
		a++; //a = a + 1; 
	}
	
	//alterando valor de a
	a = 20; 
	
	//executa uma vez e depois confere a condi��o
	do{
		printf("\n%d\n", a);
		a++;
		
	}while (a <= 10);
	
	//contagem regressiva
	/*while(b >= 1){
		
		//imprime na tela
		printf("\n\t%d\n", b);
		
		//decrementa��o
		b--; //b = b - 1; 
	}
	*/
	
	//pausa programa ap�s execu��o
	system("pause");
}
