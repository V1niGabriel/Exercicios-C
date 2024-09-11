/*
T�tulo: Preenche autom�ticamente mesmo
Descri��o: Crie um programa que preencha automaticamente (usando l�gica, n�o apenas atribuindo 
diretamente) um vetor num�rico com 10 posi��es, conforme abaixo:
Data de Cria��o:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Declara��o de vari�veis
	int Num[10];
	
	//Loop de preenchimento autom�tico
	for (int i = 0; i < 10; i++){
		Num[i] = (5 * (i + 1));
	}
	
	for (int i = 0; i < 10; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
}
