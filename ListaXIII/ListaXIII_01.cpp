/*
Titulo: Comprimento
Descricao: Escreva uma função que receba uma string como parâmetro e retorne seu comprimento, 
sem usar a função strlen()
Autor: Vinicius Gabriel
Data de Criaçao: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	//variavies
	char str[15];
	int tamanho = 0;
	
	printf("Digite:");
	fgets(str, 15, stdin);
	
	int i = 0;
	while (str[i] != '\0'){ 
		tamanho++;
		i++;
	}
	
	printf("Comprimento: %d\n", tamanho - 1); //-1 devido a correção da casa '\n' que é acrescentada pelo fgts
	
	return 0;
}
