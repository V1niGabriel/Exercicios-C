/*
T�tulo: Lista telef�nica de Vetor
Descri��o: Preencher um vetor[100] com 50 elementos
Ordenar vetor; Inserir Ordenado; Exlcuir elementos; Imprimir vetor
Contar qtas ocorr�ncias tem um elemento inserido pelo usu�rio
Autor: Vinicius Gabriel
Data de Cria��o: 24/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Vari�veis Globais
int Vet[100];
int n; //tamanho do vetor
int max = 50; //tamanho do vetor leg�vel

//Fun��o para inserir valor aleat�rio
void aleatorio(){
	srand(unsigned(time(NULL)));
	
	for (int i = 0; i < max; i++){
		Vet[i] = 1 + (rand() % 100);
	}
	n = sizeof(Vet) / sizeof(Vet[0]);
}
//Fun��o para ordenar o vetor
void ordenar(){
	for(int i = 0; i < n/2 - 1; i++){
		for(int j = 0; j < n/2 - i - 1; j++){
			if (Vet[j] > Vet[j + 1]){
				//trocar os elementos de posi��o
				int temp = Vet[j];
				Vet[j] = Vet[j + 1];
				Vet[j + 1] = temp;
			}
		}
	}
}

//Fun��o Inserir Elementos;
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


//Fun��o Exlcuir elemento
void Excluir(){
	int delet;
	int a = 0; 
	int index;
	
	//Pergunta qual o n�mero a ser excluido;
	printf("\nValor: ");
	scanf("%d", &delet);
	
	for(int i = 0; i != max; i++){
		//Guarda a posi��o do primeiro valor encontrado
		if (Vet[i] == (delet + a)) {
			int index = i;
		}
		if ((Vet[i] == delet) && (Vet[i + 1] != delet)){
			for (int t = index; t < 0; t++ );
		}
	}//Muito provalvemente vai ser necess�rio contar a quantidade de casas com valores a serem exclu�dos e ent�o pular tudo de uma vez
	
	max--;   //tamanho do vetor leg�vel
}	
	

//Fun��o Imprimir vetor
void Imprimir(){
	for(int i = 0; i != max; i++){
		printf("%d, ", Vet[i]);
	}
}
//Fun�ao qnt de ocorr�ncias de um elemento espec�fico
void ocorrencia(){
	int Num = 0;
	int cont = 0;
	
	printf("\nN�mero:");
	scanf("%d", &Num);
	
	for(int i = 0; i != max; i++){
		if (Vet[i] == Num){
			cont++;
		}
		else{
			continue;
		}
	}
	
	printf("\nO n�mero %d tem %d ocorr�ncias\n", Num, cont);
}

int main(){
	//vari�veis Locais
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
