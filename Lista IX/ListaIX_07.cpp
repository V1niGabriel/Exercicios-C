/*
Título: Vetor easy
Descrição:  Crie um vetor com 7 números inteiros e ordene-o em ordem crescente usando o algoritmo de
ordenação por bolha (bubble sort).
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

//Função de ordenação
void ordena(int arr[], int n){
	int i, j, temp;
	
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(){
	//Variáveis Locais
	int Num[7];
	int n; //tamanho da array
	int result[7]; //Resultado da ordenação
	
	//Semente aleatório
	srand(unsigned(time(NULL)));
	
	n = sizeof(Num) / sizeof(Num[0]);
	
	for(int i = 0; i != n; i++){
		Num[i] = rand() % 50;
	}
	
	ordena(Num, n);
	
	//Saida de Dados
	for(int i = 0; i < n; i++){
		printf("%d ", Num[i]);
	}
}
