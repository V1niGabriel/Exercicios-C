/*
T�tulo: Comprimento de uma string
Descri��o: Crie um programa que informa o comprimento de uma string
Autor: Vinicius Gabriel
Data de Cria��o: 13/08/2024
*/

#include <stdio.h>

int main() {
	char nome[100];
	int i = 0, cont = 0;
	
	printf("Digite alguma coisa:");
	gets(nome);
	
	while (nome[i] != '\0') {
		i++;
		cont++;
	} 
	
	printf("%d", cont);
}

