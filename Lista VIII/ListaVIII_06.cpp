/*
Título: Preenchimento automático de valores aleatórios
Descrição: Crie um programa que preencha automaticamente um vetor numérico com 7 números gerados 
aleatoriamente pelo computador e depois mostre os valores gerados na tela.
Data de Criação:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Variáveis localis
	int NUM[7];
	
	//Valor aleatório
	srand((unsigned)time(NULL)); 
	
	//Loop de entrada do vetor
	for (int i = 0; i < 7; i++){
		NUM[i] = rand() % 100;
	}
	
	//Saida de dados do vetor
	for (int i = 0; i < 7; i++){
		printf("%d, ", NUM[i]);
	}
	
	return 0;
}
