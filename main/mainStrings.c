#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	
	//Ler strings utilizando c
	
	//Variavel do tipo char
	char palavra[255];
	
	//instrução para usúario
	printf("Digite uma palavra: ");
	
	//Limpar buffer// responsavél por fazer leitura de mais de um valor
	setbuf(stdin, 0);
	
	//Ler string
	fgets(palavra, 255, stdin);
	
	//Limpar espaços não utilizados na memória
	palavra[strlen(palavra)-1]= '\0';
	
	//Imprime a palavra digitada na tela
	printf("%s", palavra); 
	system ("pause");
}
