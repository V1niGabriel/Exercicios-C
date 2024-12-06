/*
Título: Leitor de linhas
Descrição: Fazer um algoritmo que:
a) Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. A 
última linha, que não entrará nos cálculos, contém o valor da idade igual a zero;
b) Calcule e escreva a idade média deste grupo de indivíduos.
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>


int main() {
	//Variáveis locais
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
	
	//Correção da entrada do valor zero
	cont--;
	
	//Cálculo da Média
	avarega = avarega/cont;
	
	printf("Idade Média: %d", avarega);
	
	return 0;
}

