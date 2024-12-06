/*
Título: Multiplicação sem soma
Descrição: Sem utilizar a operação de multiplicação, escreva um programa que multiplique dois números 
inteiros. Por exemplo: 4 * 7 => 7 + 7 + 7 + 7 = 28
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main() {
	//Variaveis locais
	int Num1, Num2, soma;
	
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Indique os Fatores(números a serem multiplicados):\n");
	printf("Fator 1:");
	scanf("%d", &Num1);
	printf("Fator 2:");
	scanf("%d", &Num2);
	
	//Multiplicação por loop
	for (int i = Num1; i > 0; i--){
		soma += Num2;
	}
	
	printf("Resultado: %d", soma);
	
	return 0;
}

