/*
T�tulo: Leitor de linhas
Descri��o: Fazer um algoritmo que:
a) Leia um n�mero indeterminado de linhas contendo cada uma a idade de um indiv�duo. A 
�ltima linha, que n�o entrar� nos c�lculos, cont�m o valor da idade igual a zero;
b) Calcule e escreva a idade m�dia deste grupo de indiv�duos.
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>


int main() {
	//Vari�veis locais
	int cont, age = 1, avarega;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	while (age != 0){
		printf("Idade: ");
		scanf("%d", &age);
		avarega += age;
		cont++;
	}
	
	//Corre��o da entrada do valor zero
	cont--;
	
	//C�lculo da M�dia
	avarega = avarega/cont;
	
	printf("Idade M�dia: %d", avarega);
	
	return 0;
}

