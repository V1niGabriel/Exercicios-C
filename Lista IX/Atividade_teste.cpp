/*
Titulo: Lista telefonica de Vetor
Descrição: Preencher um vetor[100] com 50 elementos
Ordenar vetor; Inserir Ordenado; Exlcuir elementos; Imprimir vetor
Contar qtas ocorrencias tem um elemento inserido pelo usuario
Autor: Vinicius Gabriel
Data de Criação: 24/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Variaveis Globais
int Vet[100];
int n; //tamanho do vetor
int max = 50; //tamanho do vetor leg?vel

//Função para inserir valor aleatorio
void aleatorio(){
	srand(unsigned(time(NULL)));
	
	for (int i = 0; i < max; i++){
		Vet[i] = 1 + (rand() % 100);
	}
	n = sizeof(Vet) / sizeof(Vet[0]);
}
//Função para ordenar o vetor
void ordenar(){
	for(int i = 0; i < n/2 - 1; i++){
		for(int j = 0; j < n/2 - i - 1; j++){
			if (Vet[j] > Vet[j + 1]){
				//trocar os elementos de posição
				int temp = Vet[j];
				Vet[j] = Vet[j + 1];
				Vet[j + 1] = temp;
			}
		}
	}
}

//Função Inserir Elementos;
void Inserir(){
	int elemento;
	int i;
	
	printf("\nInserir Valor: ");
	scanf("%d", &elemento);
	
	for(i = max - 1; (i >= 0 && Vet[i] > elemento); i--){
		Vet[i + 1] = Vet[i];
	}
	
	//insere o novo elemento 
	Vet[i + 1] = elemento;
	max++;
}


//Função Exlcuir elemento
void Excluir(){
	int delet; 
	int Inicio, fim;
	int diferenca;
	
	//Pergunta qual o numero a ser excluido;
	printf("\nExcluir Valor: ");
	scanf("%d", &delet);
	
	for(int i = 0; i != max; i++){
		//Guarda a posição do primeiro valor encontrado;
		if ((Vet[i] == delet) && (Vet[i - 1] < delet)) {
			Inicio = i;
		}
		if ((Vet[i] == delet) && (Vet[i + 1] > delet)){
			fim = i + 1; //Guarda a posição do primeit valor após a o número a ser excluído
		}
	}	
	diferenca = fim - Inicio; //Calcula a quantidade de elementos do vetor ocupados pelo valor a ser excluído

	for(int i = fim; i != (max + diferenca); i++){
		Vet[i - diferenca] = Vet[i];
	} 
	
	max -= diferenca; //tamanho do vetor leg?vel
}	
	
//Função Imprimir vetor
void Imprimir(){
	for(int i = 0; i != max; i++){
		printf("%d ", Vet[i]); 
	}
	printf("\n");
}

//Função qnt de ocorr?ncias de um elemento espec?fico
void ocorrencia(){
	int Num = 0;
	int cont = 0;
	
	printf("\nNúmero:");
	scanf("%d", &Num);
	
	for(int i = 0; i != max; i++){
		if (Vet[i] == Num){
			cont++;
		}
		else{
			continue;
		}
	}
	
	printf("O número %d tem %d ocorrências\n", Num, cont);
}

int main(){
	//variaveis Locais
	int Selecionar;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	aleatorio();
	ordenar();
	
	do {
		printf("\nMenu:\n");
		printf("1. Inserir elemento\n2. Excluir elemento\n3. Imprimir vetor\n4. Quantidade de ocorrências\n5. Encerrar\nSelecione uma Opção:");
		scanf("%d", &Selecionar);
		
		switch(Selecionar){
		case 1:
			Inserir();
			break;
		case 2:
			Excluir();
			break;
		case 3:
			Imprimir();
			break;
		case 4:
			ocorrencia();
			break;
		case 5:
			printf("Encerrado");
			break;
		default:
			printf("Opção Inexistente!");		
		}
	} while (Selecionar != 5);
	
	return 0;
}
