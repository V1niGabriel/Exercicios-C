/*
Título: Hospedar
Descrição: Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
a) R$ 5.50 por diária, se o número de diárias for maior que 15;
b) R$ 6.00 por diária, se o número de diárias for igual a 15;
c) R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que solicite o nome e a quantidade de dias que ficou hospedado e mostre 
o nome, o valor da diária e o total da conta do cliente.
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Constantes
#define fx 60

int main() {
	float vt; //valor total
	float ts; //Taxa de serviço
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
	
	//Calculo da taxa de serviço
	if (dia < 15){
		ts = 8;
	}
	else if(dia > 15){
		ts = 5.50;
	}
	else {
		ts = 6; 
	}
	
	//Cálculo total da diaria
	diaria = 60 * dia;
	
	//Cálculo total da Conta
	vt = diaria + (dia*ts);
	
	//Saida de dados
	printf("Nome do Cliente: %s\n", str);
	printf("Valor da Diária: %.2f\n", diaria);
	printf("Total da Conta: %.2f\n", vt);
	
	return 0;
}

