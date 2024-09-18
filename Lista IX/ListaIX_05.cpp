/*
T�tulo: Vetor easy
Descri��o:Crie um vetor de 6 n�meros inteiros e encontre o maior e o menor valor presente no vetor.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Vari�veis Locais
	int Num[6];
	int maior = 0, menor = 11;
	
	//Valor aleat�rio
	srand(unsigned(time(NULL)));
		
	for (int i = 0; i < 6; i++){
		Num[i] = rand() % 10;
		printf ("%d ", Num[i]);
		
		//Encontra o maior
		if (Num[i] > maior){
			maior = Num[i];
		}
		
		//Encontra o menor
		if (Num[i] < menor){
			menor = Num[i];
		}
	}
	
	//Saida de dados
	printf("\n\nMaior Valor: %d\nMenor valor: %d\n", maior, menor);
	
	return 0;
}
