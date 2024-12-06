/*
Título: Permutação de Números
Descrição: Dado um número de três algarismos N = CDU (onde C é o algarismo das centenas, D é o algarismo 
das dezenas e U o algarismo das unidades), considere o número M constituído pelos algarismos 
de N em ordem inversa, isto é, M = UDC. Gerar M a partir de N (p.ex.: N = 123 -> M = 321)
Autor: Vincius Gabriel
Data de Criação:  27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main() {
	//Declararação de variáveis Local
	int Number, value;
	int inverso = 0;
	
	//Entrada de Dados
	printf("Digite qualquer valor inteiro:");
	scanf("%d", &Number);
	
	//Separação do número
	while (Number != 0){
		value = Number % 10;
		inverso = (inverso * 10) + value;
		Number = Number / 10;
	}
	
	//Saída de dados;	
	printf ("%d", inverso);
	
	return 0;
}

