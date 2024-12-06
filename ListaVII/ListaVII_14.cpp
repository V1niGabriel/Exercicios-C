/*
Título: Impressora de consoantes
Descrição: . Faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais. 
Autor: Vinicius Gabriel
Data de Criação: 28/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
	//Declarção das variáveis locais
	char str[100], copy[100];
	int n = 0;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Digite uma palvra:");
	fgets(str, 100, stdin);
	
	for(int i = 0; str[i] != '\0'; i++){
		//Verifica se algumas das letras é uma vogal (a,e,i,o,u) respectivamente.
		if (str[i] != 97 && str[i] != 101 && str[i] !=  105 && str[i] !=  111 && str[i] != 117){
			copy[n] = str[i];
			n++;
			strchr
 		}
	}
	copy[n] = '\0'; //Adiciona o caractere nulo ao final da string
	
	printf("sem vogais: %s", copy);
	
	return 0;
}
