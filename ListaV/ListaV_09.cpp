/*
Título: Impressão de trás-para-frente
Descrição:   Faça um programa que receba uma palavra e a imprima de tras-para-frente.
Autor: vinicius Gabriel
Data de criação: 16/08/2024
*/

#include <stdio.h>

//Função responsável por inverter a string
void Inverte(char *str, char *str_invert, int fim){
	int i = 0;
	int j = fim - 1;
	
	while (i < fim){
		str_invert[i] = str[j];
		i++; 
		j--;
	}
	
	str_invert[i] = '\0';
}

int main () {
	
	char str[50], str_inver[50];
	int fim;
	
	printf("Digite palavra ou grupo de palvras:");
	fgets(str, 50, stdin);
	
	for (fim = 0; str[fim] != '\0' && str[fim] != '\n'; fim++); //Percorre a string 
	
	Inverte(str, str_inver, fim);

	printf("%s\n", str);
	printf("%s", str_inver);
	
	return 0;
}

