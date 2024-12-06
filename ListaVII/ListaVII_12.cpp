/*
Título: Permutação 
Descrição:  Faça um programa que receba um frase e imprima de maneira invertida, trocando as letras A por *. 
Autor: Vinicius Gabriel 
Data de Criação: 28/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	char str[100], inverse[100];
	int cont = 0, x = 0;
	
	//UTF-8
	setlocale(LC_ALL, "");
	
	//Entrada de Dados
	printf("Escreva qualquer palavra:");
	fgets(str, 100, stdin);
	
	
	//Tamanho do vetor de caracteres
	for (int i = 0; str[i] != '\0'; i++){
		cont++;
	}
	cont--;
	
	//Inversão do vetor de caracteres
	for (int n = cont; n >= 0; n--){
		inverse[x] = str[n];
		//Verifica e caso verdadeiro troca as letras A por *
		if (inverse[x] == 97){
			inverse[x] = '*';
		}
		x++;
	}
	
	//Saída de Dados
	printf("Palavra Digitada: %s\nPalavra Ivertida: %s", str, inverse);

	return 0;
}
