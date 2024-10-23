/*
Titulo: Banco de Dados C
Descricao: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa
e armazene os dados em uma estrutura.
Autor: Vinicius Gabriel
Data de Criacao: 22/10/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Structs
typedef struct{
	char rua[30];
	char bairro[30];
	int numero;
}endereco;

typedef struct{
	char Nome[50];
	int Idade;
	endereco local;
}Registro;


int main(){
	//Declarar variavel
	Registro registro;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Qual seu nome: ");
	fgets(registro.Nome, 50, stdin);
	fflush(stdin);
	printf("Qual a Idade: ");
	scanf("%d", &registro.Idade);
	fflush(stdin);
	
	printf("Digite o endereço\n");
	printf("Rua: ");
	fgets(registro.local.rua, 30, stdin);
	fflush(stdin);
	
	printf("Bairro: ");
	fgets(registro.local.bairro, 30, stdin);
	fflush(stdin);
	
	printf("Número da casa: ");
	scanf("%d", &registro.local.numero);
	
	//Imprimir informações
	printf("\nNome: %sIdade: %d\nRua: %sBairro: %sNúmero da casa: %d\n", registro.Nome, registro.Idade,
	registro.local.rua, registro.local.bairro, registro.local.numero);
	
	return 0;
}
