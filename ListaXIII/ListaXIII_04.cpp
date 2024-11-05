/*
Titulo: Verifica String
Descricao: Escreva uma função que verifique se uma string é um palíndromo (isto é, lê-se da mesma 
forma de trás para frente).
Autor: Vinicius Gabriel
Data de criacao: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

void Compara(char *str1, int tam){
	int x = 0;
	tam--; //Ajuste para o último caractere
	for (int x = 0; str1[x] != '\0'; x++){
		if (str1[x] == str1[tam]);
		tam--;
	}
}

int main(){
	char Str1[20] = {"arara"};
	char Str2[20];
	int tam = 0;
	
	tam = strlen(Str1);
	
	Compara(Str1, tam);
}
