/*
T�tulo: Hospedar
Descri��o: Um hotel cobra R$ 60.00 a di�ria e mais uma taxa de servi�os. A taxa de servi�os � de:
a) R$ 5.50 por di�ria, se o n�mero de di�rias for maior que 15;
b) R$ 6.00 por di�ria, se o n�mero de di�rias for igual a 15;
c) R$ 8.00 por di�ria, se o n�mero de di�rias for menor que 15.
Construa um algoritmo que solicite o nome e a quantidade de dias que ficou hospedado e mostre 
o nome, o valor da di�ria e o total da conta do cliente.
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Constantes
#define fx 60

int main() {
	float vt; //valor total
	float ts; //Taxa de servi�o
	float diaria; //diaria
	int dia; //dias
	char str[100];
	
	setlocale(LC_ALL,"");
	
	//Entrada de Dados
	printf("Nome:");
	fgets(str, 100, stdin);
	fflush(stdin);
	
	printf("Dias hospedados:");
	scanf("%d", &dia);
	
	//Calculo da taxa de servi�o
	if (dia < 15){
		ts = 8;
	}
	else if(dia > 15){
		ts = 5.50;
	}
	else {
		ts = 6; 
	}
	
	//C�lculo total da diaria
	diaria = 60 * dia;
	
	//C�lculo total da Conta
	vt = diaria + (dia*ts);
	
	//Saida de dados
	printf("Nome do Cliente: %s\n", str);
	printf("Valor da Di�ria: %.2f\n", diaria);
	printf("Total da Conta: %.2f\n", vt);
	
	return 0;
}

