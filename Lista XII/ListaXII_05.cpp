/*
Titulo: Structs
Descrição: Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e 
telefone de 5 pessoas e os imprima em ordem alfabética.
Autor: Vinicius Gabriel
Data de Criação: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

typedef struct{
	char Nome[50];
	char Endereco[15];
	int Telefone;
}Registro;

int main(){
	//Definindo vetor com 5 elementos
	Registro registro[5];
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Pega as informações 
	for (int x = 0; x < 5; x++){
		printf("\nAluno %d\n", x+1);
		printf("Nome:");
		fgets(registro[x].Nome, 50, stdin);
		printf("Endereço:");
		fgets(registro[x].Endereco, 50, stdin);
		printf("Telefone:");
		scanf("%d", &registro[x].Telefone);
		fflush(stdin);
	}
	
	char alfabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	for(int i = 0; i < 26; i++){
		for (int x = 0; x < 5; x++){
			if ((registro[x].Nome[0]) == (alfabet[i])){
				printf("\nNome: %sEndereço: %sTelefone: %d\n", registro[x].Nome, registro[x].Endereco, registro[x].Telefone);
			}
		}
	}
	
	return 0;
}
