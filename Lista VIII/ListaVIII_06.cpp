/*
T�tulo: Preenchimento autom�tico de valores aleat�rios
Descri��o: Crie um programa que preencha automaticamente um vetor num�rico com 7 n�meros gerados 
aleatoriamente pelo computador e depois mostre os valores gerados na tela.
Data de Cria��o:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Vari�veis localis
	int NUM[7];
	
	//Valor aleat�rio
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
