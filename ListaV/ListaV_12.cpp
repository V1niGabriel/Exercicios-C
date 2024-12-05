/*
Título: Leitor de espaços em branco
Descrição:  Ler uma string e contar quantos caracteres sao espaços em brancos.
Autor: Vinicius Gabriel
Data de Criação: 17/08/2024
*/

#include <stdio.h>

int main() {
	char str[100];
	int fim = 0, cont = 0;
	
	printf("Digite qualquer frase:");
	fgets(str, 100, stdin);

	while (str[fim] != '\0') {
		if (str[fim] == ' ') {
			cont++;
		}
		fim++;
	}
	
	printf("%s \n%d espacos em branco", str, cont);
}
