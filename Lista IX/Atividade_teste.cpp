/*
Título: Lista telefônica de Vetor
Descrição: Preencher um vetor[100] com 50 elementos
Ordenar vetor; Inserir Ordenado; Exlcuir elementos; Imprimir vetor
Contar qtas ocorrências tem um elemento inserido pelo usuário
Autor: Vinicius Gabriel
Data de Criação: 24/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Variáveis Globais
int Vet[100];
int n; //tamanho do vetor
int max = 50; //tamanho do vetor legível

//Função para inserir valor aleatório
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
	
	printf("\nValor: ");
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
	int a = 0; 
	int index;
	
	//Pergunta qual o número a ser excluido;
	printf("\nValor: ");
	scanf("%d", &delet);
	
	for(int i = 0; i != max; i++){
		//Guarda a posição do primeiro valor encontrado
		if (Vet[i] == (delet + a)) {
			int index = i;
		}
		if ((Vet[i] == delet) && (Vet[i + 1] != delet)){
			for (int t = index; t < 0; t++ );
		}
	}//Muito provalvemente vai ser necessário contar a quantidade de casas com valores a serem excluídos e então pular tudo de uma vez
	
	max--;   //tamanho do vetor legível
}	
	

//Função Imprimir vetor
void Imprimir(){
	for(int i = 0; i != max; i++){
		printf("%d, ", Vet[i]);
	}
}
//Funçao qnt de ocorrências de um elemento específico
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
	
	printf("\nO número %d tem %d ocorrências\n", Num, cont);
}

int main(){
	//variáveis Locais
	int Selecionar;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	aleatorio();
	ordenar();
	Imprimir();
	Inserir();
	Imprimir();
	ocorrencia();
	
	return 0;
}
