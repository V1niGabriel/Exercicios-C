/*
Título: Sem vogais
Descrição: Faça um programa que receba do usuario uma string. O programa imprime a string sem suas 
vogais.
Autor: Vinicius Gabriel
Data de Criação: 17/08/2024
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[100], str_morph[100];
	int fim, i, j;
	
	printf("Digite qualquer coisa:");
	fgets(str, 100, stdin);
	
	for (fim = 0; str[fim] != '\0' && str[fim] != '\n'; fim++) ;
	
	j = 0;
	i = 0;
	
	while (i < fim) {
		if ((str[j] != 'a' && str[j] != 'A') && (str[j] != 'e' && str[j] != 'E') && (str[j] != 'i' && str[j] != 'I') 
		 && (str[j] != 'o' && str[j] != 'O') && (str[j] != 'u' && str[j] != 'U')) {
			str_morph[i] = str[j];
			i++;
		}
		j++;
	}
	
	printf("%s", str);
	printf("%s", str_morph);

	return 0;
}



