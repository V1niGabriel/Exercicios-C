/*
T�tulo: Impress�o com condi��o 
Descri��o: Entre com um nome e imprima-o somente se a primeira letra do nome for �a� maiuscula ou 
min�scula.
Autor: Vinicius Gabriel
Data de Cria��o: 13/08/2024
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


