/*
T�tulo: Contador de a's
Descri��o: Fa�a um programa que conte o numero de a�s que aparecem em um string. Exemplo: �arara� > 3
Autor: vinicius Gabriel
Data de cria��o: 16/08/2024
*/

#include <stdio.h>

int main() {
	char palavra[100];
	int cont = 0;
	
	printf("Digite um nome:");
	gets(palavra);
	
	for (int i = 0; palavra[i] != '\0'; i++){
		if (palavra[i] == 'a') {
			cont++;
		}
	}
	
	printf("\nQuantidade de a's na palavra %s eh %d", palavra, cont);
	
	return 0;
}

