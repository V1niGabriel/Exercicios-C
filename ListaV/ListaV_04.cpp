/*
Título: Quantidade de Letras 
Descrição: Digite um nome e retorne quantas letras tem esse nome.
Autor: Vinicius Gabriel
Data de Criação: 13/08/2024
*/

#include<stdio.h>

int main() {
	char nome[100];
	int cont = 0, i = 0;
	
	printf("Digite qualquer nome: ");
	gets(nome);
	
	while (nome[i] != '\0') {
		i++;
		cont++;
	} 
	printf("Quantidade de letras na palavra eh %d", cont);
}

