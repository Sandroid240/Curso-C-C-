#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <string>
#include <iostream>

using namespace std; 

int main(){
	
	setlocale(LC_ALL, "");
	
	/*Como seria diferença entre vetor e matriz
	Vetor = [0][1][2]
	Matriz = [0,0][0,1]
		   	 [1,0][1,1]
	*/
	
	//criando matriz
	int matriz[2][2], i, j;
	
	//passando valores
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4; 
	

	
	//imprimindo valores na tela
	for(i =0; i < 2; i++){
		for(j =0; j < 2; j++){
		//cout << "\ni = "<< "["<< i << "]" << ", j = "<< "["<< j <<"]";
		//cout << "\n" << matriz[i][j];
		cout << matriz[i][j] * 2 << " ";
	}
	cout << "\n";
}

	
	cout<< "Digite os valores da matriz: ";
	//lendo valores para a matriz
	for(i =0; i < 2; i++){
		for(j =0; j < 2; j++){
		
		cin >> matriz[i][j];
	}	
}

	for(i =0; i < 2; i++){
		for(j =0; j < 2; j++){
		//cout << "\ni = "<< "["<< i << "]" << ", j = "<< "["<< j <<"]";
		//cout << "\n" << matriz[i][j];
		cout << matriz[i][j] * 2 << " ";
	}
	cout << "\n";
}
	
	
	return 0;
}
