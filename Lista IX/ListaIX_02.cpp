/*
T�tulo: Vetor easy
Descri��o: Escreva um programa que leia 5 n�meros inteiros do usu�rio e armazene-os em um vetor. Em
seguida, imprima os valores do vetor.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Vari�veis Locais
	int Num[5];
	
	setlocale(LC_ALL,"");
	
	printf("Digite 5 n�meros\n");
	
	for(int i = 0; i < 5; i++){
		printf("Valor: ");
		scanf("%d", &Num[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("%d - ", Num[i]);
	}
	
	return 0;
}

