/*
T�tulo: Substituidor de \0
Descri��o:  Escreva um programa que substitui as ocorrencias de um caractere �0� em uma string por outro 
caractere �*�.
Autor: vinicius Gabriel
Data de cria��o: 16/08/2024
*/

#include <stdio.h>

int main() {
	char palavra[100];
	
	printf("Digite qualquer palavra:");
	gets(palavra);
	
	for(int i = 0; palavra[i] != '\0'; i++) {
		if (palavra[i] == '\0'){
			palavra[i] = '*';
		}
	}
	
	printf("%s", palavra);
	
	return 0;
}
