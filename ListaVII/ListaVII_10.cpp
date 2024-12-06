/*
Título: Número PRIMO
Descrição: Número primo é aquele que somente é divisível por ele mesmo e por 1. Fazer um algoritmo que 
imprima todos os números primos entre 1 e um número inteiro positivo fornecido pelo usuário.
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
	//Variáveis locais
	int Num, cont;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Forneça um número inteiro positivo: ");
	scanf("%d", &Num);
	
	printf("Números Primos:");
	
	for (int i = 2; i <= Num; i++){
		cont = 0;
		for (int n = 2; n <= 6; n++){
			if (((i % n) == 0) && (i != n)) {
				cont++;
			}
		}
		if (cont == 0){
			printf ("%d - ", i);
		}
	}
	
	return 0;
}


