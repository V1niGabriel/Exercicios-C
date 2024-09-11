/*
T�tulo: Preenchimento autom�tico de 15 posi��es
Descri��o: Crie um programa que preencha automaticamente (usando l�gica, n�o apenas atribuindo 
diretamente) um vetor num�rico com 15 posi��es com os primeiros elementos da sequ�ncia de 
Fibonacci:
Data de Cria��o:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>


int main(){
	//Vari�veis locais
	int Num[16];
	int a, b, index;
	
	a = 1; b = 0;
	//Loop de inser��o dos valores de Fibonacchi
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
