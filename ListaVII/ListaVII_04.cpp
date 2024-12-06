/*
T�tulo: Permuta��o de N�meros
Descri��o: Dado um n�mero de tr�s algarismos N = CDU (onde C � o algarismo das centenas, D � o algarismo 
das dezenas e U o algarismo das unidades), considere o n�mero M constitu�do pelos algarismos 
de N em ordem inversa, isto �, M = UDC. Gerar M a partir de N (p.ex.: N = 123 -> M = 321)
Autor: Vincius Gabriel
Data de Cria��o:  27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main() {
	//Declarara��o de vari�veis Local
	int Number, value;
	int inverso = 0;
	
	//Entrada de Dados
	printf("Digite qualquer valor inteiro:");
	scanf("%d", &Number);
	
	//Separa��o do n�mero
	while (Number != 0){
		value = Number % 10;
		inverso = (inverso * 10) + value;
		Number = Number / 10;
	}
	
	//Sa�da de dados;	
	printf ("%d", inverso);
	
	return 0;
}

