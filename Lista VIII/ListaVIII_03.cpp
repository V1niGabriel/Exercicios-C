/*
T�tulo: 
Descri��o: 
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
	
	//Loop de inser��o dos valores
	for (int i = 0; i < 10; i++){
		Num[i] = (9 - i);
	}
	
	//Saida de dados
	for (int i = 0; i < 10; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
}
