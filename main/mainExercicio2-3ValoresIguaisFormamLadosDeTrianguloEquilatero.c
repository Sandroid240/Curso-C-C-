#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que leia 3 valores e informe se eles são
	iguais entre si para formarem os lados de um triangulo equilátero*/
	
	int lado1, lado2, lado3, resultado;
	
	printf("\nEntre com o valor do primeiro lado do triangulo: ");
	scanf("%d", &lado1);
	printf("\nEntre com o valor do segundo lado do triangulo: ");
	scanf("%d", &lado2);
	printf("\nEntre com o valor do terceiro lado do triangulo: ");
	scanf("%d", &lado3);
	 
	resultado = lado1 + lado2 + lado3;
	
	//Analisando se triangulo é equilátero		
	if((lado1 == lado2) && (lado2 == lado3)){
		printf("\nO valor do triangulo equilátero é: %d\n", resultado);
	//Analisando se triangulo é Isosceles
	}else if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
		printf("\nSeu triangulo agora é o Isosceles e o valor dele é: %d\n", resultado);
	//Se as duas analises forem falsas, logo o triangulo será Escaleno
	}else{
		printf("\nSeu triangulo agora é o Escaleno e o valor dele é: %d\n", resultado);
	}
	system("pause");
}
