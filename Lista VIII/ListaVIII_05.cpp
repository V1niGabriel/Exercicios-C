/*
Título: Preenchimento automático de 15 posições
Descrição: Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo 
diretamente) um vetor numérico com 15 posições com os primeiros elementos da sequência de 
Fibonacci:
Data de Criação:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>


int main(){
	//Variáveis locais
	int Num[16];
	int a, b, index;
	
	a = 1; b = 0;
	//Loop de inserção dos valores de Fibonacchi
	for (int i = 0; i <= 15; i++){
		index = b;
		b = a;
		Num[i] = a;
		a = index + b;
		
	}
	
	//Loop de saida do vetor 
	for (int i = 0; i <= 15; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
}
