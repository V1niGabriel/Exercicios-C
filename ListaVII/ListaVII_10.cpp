/*
T�tulo: N�mero PRIMO
Descri��o: N�mero primo � aquele que somente � divis�vel por ele mesmo e por 1. Fazer um algoritmo que 
imprima todos os n�meros primos entre 1 e um n�mero inteiro positivo fornecido pelo usu�rio.
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
	//Vari�veis locais
	int Num, cont;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Forne�a um n�mero inteiro positivo: ");
	scanf("%d", &Num);
	
	printf("N�meros Primos:");
	
	for (int i = 2; i <= Num; i++){
		cont = 0;
		for (int n = 2; n <= 6; n++){
			if (((i % n) == 0) && (i != n)) {
				cont++;
			}
		}
		if (cont == 0){
			printf ("%d - ", i);
		}
	}
	
	return 0;
}


