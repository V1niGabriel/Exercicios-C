/*
T�tulo: Leitor
Descri��o: Fa�a um programa que leia uma string e a imprima.
Autor: Vinicius Gabriel
Data de Cria��o: 13/08/2024
*/


#include <stdio.h>
#include <conio.h>

int main() {
	char leia[50];
	
	printf("Digite qualquer coisa:" );
	gets(leia);
	
	printf("Voc� digitou %s", leia);
}

