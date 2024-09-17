/*
Título: VETPR ALEATÓRIO
Descrição:Crie uma lógica que preencha um vetor de 20 posições com números aleatórios (entre 0 e 99) 
gerados pelo computador. Logo em seguida, mostre os números gerados e depois coloque o vetor 
em ordem crescente, mostrando no final os valores ordenados.
Autor: Vinicius Gabriel 
Data de Criação: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void trocar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Função para particionar a lista em torno do pivô
int particionar(int arr[], int inicio, int fim){
	int pivo = arr[fim]; //Escolha do pivô (último elemento)
	int i = inicio - 1; //Índice do menor elemento
	
	for (int j = inicio; j < fim; j++){
		if (arr[j] <= pivo){
			i++;
			trocar(&arr[i], &arr[fim]); //Move elemtnos menores para a esquerda
		}
	}
	trocar(&arr[i + 1], &arr[j]); //Coloca o pivô na posição correta
	return (i + 1); //Retorna a posição do pivô
}

//Função principal do Quick Sort
void quicksort(int arr[], int inicio, int fim){
	if (inicio < fim){
		int pivoIndex = particionar(arr, inicio, fim); //Particiona e obtém o índice do pivô
		quicksort(arr, inicio, pivoIndex - 1); //Ordena a sub-lista à esquerda do pivô
		quicksort(arr, pivoIndex + 1, fim); //Ordena a sub-lista à direita do pivô
	}
}

//Função para imprimir o array
void imprimir(int arr[], int tamanho){
	for (int i = 0; i < tamanho; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(){
	//Variáveis locais
	int NUM[20];  

	//Semente 
	srand( (unsigned)time(NULL) );
	
	//Inserção dos valores aleatórios no vetor
	for (int i = 0; i != (sizeof(NUM) / sizeof(NUM[0])); i++){
		NUM[i] = (rand() % 100);
	}
	
	int tamanho = sizeof(NUM) / sizeof(NUM[0]);
	
	//Loop de saída dos valores aleatórios atribuído ao vetor
	printf("Array antes da ordenação:");
	for(int a = 0; a < 20; a++){
		printf("%d, ", NUM[a]);
	}
	
	quicksort(NUM, 0, tamanho - 1);
	
	printf("Array depois da ordenação:\n");
	imprimir(NUM, tamanho);
	
	return 0;	
}
