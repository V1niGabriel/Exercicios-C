/*
T�tulo: VETPR ALEAT�RIO
Descri��o:Crie uma l�gica que preencha um vetor de 20 posi��es com n�meros aleat�rios (entre 0 e 99) 
gerados pelo computador. Logo em seguida, mostre os n�meros gerados e depois coloque o vetor 
em ordem crescente, mostrando no final os valores ordenados.
Autor: Vinicius Gabriel 
Data de Cria��o: 17/09/2024
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

//Fun��o para particionar a lista em torno do piv�
int particionar(int arr[], int inicio, int fim){
	int pivo = arr[fim]; //Escolha do piv� (�ltimo elemento)
	int i = inicio - 1; //�ndice do menor elemento
	
	for (int j = inicio; j < fim; j++){
		if (arr[j] <= pivo){
			i++;
			trocar(&arr[i], &arr[fim]); //Move elemtnos menores para a esquerda
		}
	}
	trocar(&arr[i + 1], &arr[j]); //Coloca o piv� na posi��o correta
	return (i + 1); //Retorna a posi��o do piv�
}

//Fun��o principal do Quick Sort
void quicksort(int arr[], int inicio, int fim){
	if (inicio < fim){
		int pivoIndex = particionar(arr, inicio, fim); //Particiona e obt�m o �ndice do piv�
		quicksort(arr, inicio, pivoIndex - 1); //Ordena a sub-lista � esquerda do piv�
		quicksort(arr, pivoIndex + 1, fim); //Ordena a sub-lista � direita do piv�
	}
}

//Fun��o para imprimir o array
void imprimir(int arr[], int tamanho){
	for (int i = 0; i < tamanho; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(){
	//Vari�veis locais
	int NUM[20];  

	//Semente 
	srand( (unsigned)time(NULL) );
	
	//Inser��o dos valores aleat�rios no vetor
	for (int i = 0; i != (sizeof(NUM) / sizeof(NUM[0])); i++){
		NUM[i] = (rand() % 100);
	}
	
	int tamanho = sizeof(NUM) / sizeof(NUM[0]);
	
	//Loop de sa�da dos valores aleat�rios atribu�do ao vetor
	printf("Array antes da ordena��o:");
	for(int a = 0; a < 20; a++){
		printf("%d, ", NUM[a]);
	}
	
	quicksort(NUM, 0, tamanho - 1);
	
	printf("Array depois da ordena��o:\n");
	imprimir(NUM, tamanho);
	
	return 0;	
}
