/*
Título: Metros Quadrados
Descrição: Faça um algoritmo que leia um valor inteiro em metros(m) e apresente os resultados do quadrado
(m2) e do cubo (m3) referentes ao valor lido.
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	//Declaração das variáveis 
	float m; //Metros
	float m2; //Metros quadrados
	float m3; //Metros cúbicos
	
	//Entrada de dados
	printf("Digite qualquer metragem:");
	scanf("%f", &m);
	
	//Valor(m) ao quadrado
	m2 = pow(m, 2);
	//Valor(m) ao cubo
	m3 = pow(m, 3);
	
	//Saída de dados
	printf("Metros: %.2f\nMetros^2: %.2f\nMetros^3: %.2f\n", m, m2, m3);
	
	return 0;
}

