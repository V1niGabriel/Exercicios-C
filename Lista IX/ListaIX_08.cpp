/*
Título: Vetor easy
Descrição: Leia 5 números inteiros para um vetor e inverta a ordem dos elementos. Imprima o vetor original
e o vetor invertido.
Autor: Vinicius Gabriel
Data de criação: 17/09/2024
*/
/*
Passagem por valor e referência - estudar.
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Variáveis Locais
	int Num[5];
	int invert[5];
	
	//Loop de entrada
	printf("Digite 5 valores\n");
	for(int i = 0; i < 5; i++){
		printf("Valor: ");
		scanf("%d", &Num[i]);
	}
	
	for(int i = 0; i < 5; i++){
		invert[4 - i] = Num[i];
	}
	
	printf("\nVetor Original: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", Num[i]);
	}
	printf("\nVetor Invertido: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", invert[i]);
	}
}
