/*
T�tulo: Metros Quadrados
Descri��o: Fa�a um algoritmo que leia um valor inteiro em metros(m) e apresente os resultados do quadrado
(m2) e do cubo (m3) referentes ao valor lido.
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	//Declara��o das vari�veis 
	float m; //Metros
	float m2; //Metros quadrados
	float m3; //Metros c�bicos
	
	//Entrada de dados
	printf("Digite qualquer metragem:");
	scanf("%f", &m);
	
	//Valor(m) ao quadrado
	m2 = pow(m, 2);
	//Valor(m) ao cubo
	m3 = pow(m, 3);
	
	//Sa�da de dados
	printf("Metros: %.2f\nMetros^2: %.2f\nMetros^3: %.2f\n", m, m2, m3);
	
	return 0;
}

