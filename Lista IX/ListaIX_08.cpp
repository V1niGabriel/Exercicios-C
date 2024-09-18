/*
T�tulo: Vetor easy
Descri��o: Leia 5 n�meros inteiros para um vetor e inverta a ordem dos elementos. Imprima o vetor original
e o vetor invertido.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/
/*
Passagem por valor e refer�ncia - estudar.
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Vari�veis Locais
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
