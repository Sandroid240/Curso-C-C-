#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
	//definindo variaveis
	int a = 5, b = 10, c = 15;
	char d = 'x';
	
	if (a > 2){
		printf("\n %d � maior que 2", a);
	}
	
	//maior ou igual
	if (c >= b ){
		printf("\n %d � maior ou igual que %d e diferente e %d", c, b);
	} 
	
	//menor
	if( a < 10){
		printf("\n %d � menor que 10", a);
	}
	
	//menor ou igual
	if (a <= 10){
		printf("\n %d menor ou igual a 10", a);
	}
	
	//diferente
	if(c != 10){
		printf("\n %d n�o � de 10", c);
	}
	
	//tipo char
	if(d != 'a'){
		printf("\n '%c' n�o � 'a' ", d);
	}
	
	printf("\nOl� mundo!");
}
