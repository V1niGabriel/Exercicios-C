/*
T�tulo: Vetor easy
Descri��o: Leia 8 n�meros inteiros para um vetor e calcule a soma dos elementos.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Vari�veis globais
int Num[8];
int n; //tamanho do vetor
int x = 0;
int soma = 0;

//Fun��o recursiva de Soma
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
	//UTF-8
	setlocale(LC_ALL,"");
	//Entrada de Dados
	printf("Digite 8 n�meros:\n");
	for(int i = 0; i < 8; i++){
		printf("Valor: ");
		scanf("%d", &Num[i]);
	}
	
	n = sizeof(Num) / sizeof(Num[0]);
	
	printf("Somat�rio: %d", Somatorio(0));
}
