/*
Título: Leitor de nome com base no sexo
Descrição: Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e 
a palavra “ACEITA”, caso contrario imprimir “NAO ACEITA”.
Autor: Vinicius Gabriel
Data de Criação: 15/08/2024
*/

#include <stdio.h>
#include <string.h>

int main() {
	int idade, comper;
	char nome[50], sexo[10];
	
	printf("Nome:");
	gets(nome);
	printf("sexo:");
	gets(sexo);
	printf("Idade:");
	scanf("%d", &idade);
	
	comper = strcasecmp(sexo, "feminino");
	
	if ((comper == 0) && (idade < 25)) {
		printf("%s - ACEITA", nome);
	}
	else {
		printf("NAO ACEITA");
	}
	
	return 0;
}


