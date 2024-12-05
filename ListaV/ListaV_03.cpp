/*
Título: Impressão com condição 
Descrição: Entre com um nome e imprima-o somente se a primeira letra do nome for ‘a’ maiuscula ou 
minúscula.
Autor: Vinicius Gabriel
Data de Criação: 13/08/2024
*/

#include <stdio.h>

int main() {
	char nome[50];
	
	printf("Digite um nome:");
	gets(nome);
	
	if (nome[0] == 97) {
		printf("%s", nome);
	}
	
	return 0;
}


