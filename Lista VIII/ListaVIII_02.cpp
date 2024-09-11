/*
Título: Preenche automáticamente mesmo
Descrição: Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo 
diretamente) um vetor numérico com 10 posições, conforme abaixo:
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
	
	//Loop de preenchimento automático
	for (int i = 0; i < 10; i++){
		Num[i] = (5 * (i + 1));
	}
	
	for (int i = 0; i < 10; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
}
