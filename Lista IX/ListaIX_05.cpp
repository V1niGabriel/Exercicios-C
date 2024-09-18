/*
Título: Vetor easy
Descrição:Crie um vetor de 6 números inteiros e encontre o maior e o menor valor presente no vetor.
Autor: Vinicius Gabriel
Data de criação: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Variáveis Locais
	int Num[6];
	int maior = 0, menor = 11;
	
	//Valor aleatório
	srand(unsigned(time(NULL)));
		
	for (int i = 0; i < 6; i++){
		Num[i] = rand() % 10;
		printf ("%d ", Num[i]);
		
		//Encontra o maior
		if (Num[i] > maior){
			maior = Num[i];
		}
		
		//Encontra o menor
		if (Num[i] < menor){
			menor = Num[i];
		}
	}
	
	//Saida de dados
	printf("\n\nMaior Valor: %d\nMenor valor: %d\n", maior, menor);
	
	return 0;
}
