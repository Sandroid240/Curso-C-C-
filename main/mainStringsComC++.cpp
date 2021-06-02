#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <string> //biblioteca de leitura de string 
#include <iostream> //biblioteca que substitui a <stdio.h>

using namespace std; 

 
int main(){
	setlocale(LC_ALL, "");
	
	//Acessar funções da biblioteca <string>
	
	
	//Definindo string
	string palavra;
	
	//imprimindo na tela
	cout << "Digite uma palavra: ";
	
	//lendo a string
	cin >> palavra; 
	
	//imprimindo a variavel 
	cout << "A palavra é: " <<palavra;  //Para concatenar, basta digitar a frase e separar com << adicionando a variavel no final  
	
	return 0;
}
