/*
T�tulo: Compara��o de STRINGS
Descri��o: Crie um programa que compara duas strings (n�o use a fun��o strcmp). 
Autor: Vinicius Gabriel
Data de Cria��o: 28/08/2024
*/

//Biblotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	//Vair�veis Locais
	char str1[100], str2[100], maior[100];
	int resultado, Indexador, n;
	
	//UTF-8
	setlocale(LC_ALL, "");
	
	//Entrada de Dados
	printf("Digite uma palavra:");
	fgets(str1, 100, stdin);
	while ((getchar()) != '\n'); //Limpa o buffer de entrada
	
	printf("Digite outra palavra:");
	fgets(str2, 100, stdin);
	//while ((getchar()) != '\n'); //Limpa o buffer de entrada
	
	//Aloca��o e indentifica��o do vetor de caracteres maior
	for (n = 0; (str1[n] != '\0') || (str2[n] != '\0'); n++){
		if ((str1[n] == '\0') && (str2[n] != '\0')) {
			strcpy(maior, str2);
		}
		else{
			strcpy(maior, str1);
		}
	}
	
	//Loop de Compara��o
	for (int i = 0; maior[i] != '\0' ; i++){
		//Verifica e Indexa um valor com base na compara��o entre as letras (0) - Verdaeira; (1) - falsa.
		if (str1[i] == str2[i]){
			Indexador = 0;
		}
		else {
			Indexador = 1;
		}
		resultado += Indexador; 
	}
	
	//Verifica se o resultado da compara��o � verdadeiro ou falso
	if  (resultado == 0){
		printf("As palavras %s e %s s�o IGUAIS", str1, str2);
	}
	else {
		printf("As palavras %s e %s s�o DIFERENTES", str1, str2);
	}
	
	return 0;
}
