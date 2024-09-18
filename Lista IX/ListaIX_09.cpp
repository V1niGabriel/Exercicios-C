/*
Título: Vetor easy
Descrição: Leia dois vetores de 6 elementos e calcule o resultado da multiplicação elemento a elemento dos
dois vetores.
Autor: Vinicius Gabriel
Data de criação: 17/09/2024
*/
/*
Passagem por valor e referência - estudar.
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>


int main(){
	//variáveis locais
	int Num1[6], Num2[6];
	int result[6];
	
	printf("Digite 12 valores:\n\n");
	printf("Vetor 1\n");
	for(int i = 0; i < 6; i++){
		printf("Valor: ");
		scanf("%d", &Num1[i]);
	}
	
	printf("\nVetor 2\n");
	for(int i = 0; i < 6; i++){
		printf("Valor: ");
		scanf("%d", &Num2[i]);
	}
	
	//Multiplicação
	for(int i = 0; i < 6; i++){
		result[i] = (Num1[i] * Num2[i]);
	}
	
	//Saida do resultado da multiplicação
	printf("\n\nResultado: ");
	for (int i = 0; i < 6; i++){
		printf("%d ", result[i]);
	}
	
	return 0;
}
