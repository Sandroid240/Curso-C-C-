#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que leia 3 valores e informe se eles s�o
	iguais entre si para formarem os lados de um triangulo equil�tero*/
	
	int lado1, lado2, lado3, resultado;
	
	printf("\nEntre com o valor do primeiro lado do triangulo: ");
	scanf("%d", &lado1);
	printf("\nEntre com o valor do segundo lado do triangulo: ");
	scanf("%d", &lado2);
	printf("\nEntre com o valor do terceiro lado do triangulo: ");
	scanf("%d", &lado3);
	 
	resultado = lado1 + lado2 + lado3;
	
	//Analisando se triangulo � equil�tero		
	if((lado1 == lado2) && (lado2 == lado3)){
		printf("\nO valor do triangulo equil�tero �: %d\n", resultado);
	//Analisando se triangulo � Isosceles
	}else if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
		printf("\nSeu triangulo agora � o Isosceles e o valor dele �: %d\n", resultado);
	//Se as duas analises forem falsas, logo o triangulo ser� Escaleno
	}else{
		printf("\nSeu triangulo agora � o Escaleno e o valor dele �: %d\n", resultado);
	}
	system("pause");
}
