/*
Título: Conversor para Maiúscula
Descrição: Leia uma string e converta todos os caracteres para maiuscula. Dica: subtraia 32 dos caracteres 
cujo codigo ASCII está entre 97 e 122.
Autor: Vinicius Gabriel
Data de Criação: 29/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Variáveis Localis
	char str[100], str2[100];
	int n;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de dados
	printf("Escreva uma palavra:");
	fgets(str, 100, stdin);
	
	//Conversor de Minúscula para maiúscula
	for (n = 0; str[n] != '\0'; n++){
		if (str[n] >= 'a' && str[n] <= 'z'){
			str[n] -= 32;	
		}
	}
	
	n--; //Correção da leitura do caracter nulo
	str[n] = '\0'; //Caracter NULL. Indica o fim do vetor
	
	printf("%s", str); //Saida de dados
	
	return 0;
}
