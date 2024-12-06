/*
Título:
Descrição: Faça um algoritmo para calcular a área de uma circunferência, considerando a fórmula: ÁREA = p * RAIO2
Utilize as variáveis AREA e RAIO, a constante p (pi = 3,14159) e os operadores aritméticos 
de multiplicação
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//constante
#define pi 3.14159

int main() {
	//variáveis locais
	float Area, Raio;
	
	//Definição do UTF-8
	setlocale(LC_ALL, "");
	
	//Entrada de dados
	printf("Qual o valor do raio:");
	scanf("%f", &Raio);
	
	//Cálculo da área
	Area = pi * (Raio * Raio);
	
	//Saída de dados
	printf("\nA área da circunferência é: %.3f", Area);
	
	return 0;	
}

