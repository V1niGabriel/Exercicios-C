/*
Título: Comparador de Strings
Descrição: Crie um programa que compara duas strings.
Autor: Vinicius Gabriel
Data de criação: 15/08/2024
*/


#include <stdio.h>
#include <string.h>

int main() {
	char str1[50], str2[50], maior[50];
	
	printf("Digite um nome:");
	gets(str1);
	printf("Digite o mesmo ou outro nome:");
	gets(str2);
	
	if (strlen(str1) > strlen(str2)) {
		strcpy(maior, str1);
	}
	else {
		strcpy(maior, str2);
	}
	
	for (int i = 0; i == '\0'; i++ ) {
		if (str1[i] == str2[i]) {
			printf("Sao iguais");
		}
		else {
			printf("Sao diferentes");
		}
	}
	
	return 0;
	
}

