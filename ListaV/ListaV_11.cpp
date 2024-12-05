/*
Título: Substituto de vogais e consoantes
Descrição: Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa 
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada 
por esse caractere. 
Autor: Vinicius Gabriel
Data de Criação:17/08/2024
*/

#include <stdio.h>

int main() {
	char str[100], str_morph[100], vogal[2];
	int fim, j, i, cont;
	
	printf("Digite: ");
	fgets(str, 100, stdin);
	
	//fim da string
	for (fim = 0; str[fim] != '\0' && str[fim] != '\n'; fim++) ;
	
	//Quantidade  de vogais
	for (i = 0; i < fim; i++) {
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')) {
			cont++;
		}
	}
	
	printf("\n\n A palavra %s possui %d vogais.", str, cont);
	printf("\n selecione uma consoante para substituir todas as vogais\n consoante:");
	fgets(vogal, 2, stdin);
	
	for (i = 0; i < fim; i++) {
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')) {
			str_morph[i] = vogal[0];
		}
		else {
			str_morph[i] = str[i];
		}
	}
	
	printf("\n%s - %s", str, str_morph);
	return 0;
}
