/*
Título: Multiplos
Descrição: Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000.
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	//Informativo
	printf("Múltiplos positivos de 7 e inferiores a 1000:\n");
	
	//loop
	for(int i = 7; i < 1000; i++){
		//Verificação da condição matemática
		if ((i % 7) == 0){
			printf("%d - ", i);
		}
		else {
			continue;
		}
	}
	
	return 0;
}

