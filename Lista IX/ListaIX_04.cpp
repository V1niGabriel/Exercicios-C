/*
Título: Vetor easy
Descrição:Modifique o programa anterior para calcular e exibir a média dos elementos do vetor.
Autor: Vinicius Gabriel
Data de criação: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Variáveis globais
int Num[8];
int n; //tamanho do vetor
int x = 0;
int soma = 0;

//Função recursiva de Soma
int Somatorio (int x){
	if (x == n){
		return (soma);
	}
	else {
		soma += Num[x];
		Somatorio(x + 1);
	}
}

int main(){
	//Variáveis Locais
	float average;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Digite 8 números:\n\n");
	for(int i = 0; i < 8; i++){
		printf("Valor: ");
		scanf("%d", &Num[i]);
	}
	
	//Tamanho do vetor
	n = sizeof(Num) / sizeof(Num[0]);
	
	//Cálcula Média
	average = (float)Somatorio(0) / n;
	
	printf("\nMedia: %.3f", average);
}
