/*
Título: DIVISÃO SUCESSIVA
Descrição: Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) até que o resultado 
seja menor que 1. Mostre o resultado da última divisão e a quantidade de divisões efetuadas
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Constante
#define division 2

int main() {
	//Variáveis locais 
	float Num; //Valor
	int n = 0; //Contador
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Digite um número:");
	scanf("%f", &Num);
	
	//loop para divisões
	while (Num > 1){
		//Divisão
		Num = Num / division;
		//Incremento do contador
		n++;
	}
	
	printf("Valor da última divisão: %.5f\nQuantidade de Divisões: %d", Num, n);
	
	return 0;
}

