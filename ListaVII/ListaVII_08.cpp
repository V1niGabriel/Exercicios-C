/*
T�tulo: DIVIS�O SUCESSIVA
Descri��o: Fa�a um algoritmo que leia um n�mero e divida-o por dois (sucessivamente) at� que o resultado 
seja menor que 1. Mostre o resultado da �ltima divis�o e a quantidade de divis�es efetuadas
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Constante
#define division 2

int main() {
	//Vari�veis locais 
	float Num; //Valor
	int n = 0; //Contador
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Digite um n�mero:");
	scanf("%f", &Num);
	
	//loop para divis�es
	while (Num > 1){
		//Divis�o
		Num = Num / division;
		//Incremento do contador
		n++;
	}
	
	printf("Valor da �ltima divis�o: %.5f\nQuantidade de Divis�es: %d", Num, n);
	
	return 0;
}

