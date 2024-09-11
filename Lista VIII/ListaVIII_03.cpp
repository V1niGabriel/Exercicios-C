/*
Título: 
Descrição: 
Data de Criação:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Declaração de variáveis
	int Num[10];
	
	//Loop de inserção dos valores
	for (int i = 0; i < 10; i++){
		Num[i] = (9 - i);
	}
	
	//Saida de dados
	for (int i = 0; i < 10; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
}
