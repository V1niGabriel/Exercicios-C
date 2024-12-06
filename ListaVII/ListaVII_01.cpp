/*
T�tulo:
Descri��o: Fa�a um algoritmo para calcular a �rea de uma circunfer�ncia, considerando a f�rmula: �REA = p * RAIO2
Utilize as vari�veis AREA e RAIO, a constante p (pi = 3,14159) e os operadores aritm�ticos 
de multiplica��o
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//constante
#define pi 3.14159

int main() {
	//vari�veis locais
	float Area, Raio;
	
	//Defini��o do UTF-8
	setlocale(LC_ALL, "");
	
	//Entrada de dados
	printf("Qual o valor do raio:");
	scanf("%f", &Raio);
	
	//C�lculo da �rea
	Area = pi * (Raio * Raio);
	
	//Sa�da de dados
	printf("\nA �rea da circunfer�ncia �: %.3f", Area);
	
	return 0;	
}

