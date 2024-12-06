/*
Título: Folha de Trabalho
Descrição: Faça um algoritmo que:
a) Solicite ao usuário o valor para a variável HT (horas trabalhadas no mês);
b) Solicite ao usuário o valor para a variável VH (valor hora trabalhada):
c) Solicite ao usuário o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido
Autor: Vinicius Gabriel
Data de Criação: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main() {
	//Declração de variáveis localListaVII_02
	int HT ;  //Horas trabalhadas
	float VH; //Valor hora trabalhada
	float PD; // Percentual de desconto
	float SB; //salário bruto
	float TD; //desconto total
	float SL; //Salário Líquido
	
	setlocale(LC_ALL, "");
	
	//Entrada de dados
	printf("Horas trabalhadas:");
	scanf("%d", &HT);
	
	printf("Valor Hora trabalhada:");
	scanf("%f", &VH);
	
	printf("Percentual de desconto:");
	scanf("%f", &PD);
	
	//Cálculo do salário bruto
	SB = HT * VH;
	
	//Cálculo Total do desconto
	TD = (PD/100) * SB;
	
	//Cálculo Salário líquido
	SL = SB - TD;
	
	//Saída de informações
	printf(" Horas Trabalhadas: %d\n Salário Bruto: R$%.2f\n Desconto: R$%.2f\n Salário Líquido: R$%.2f", HT, SB, TD, SL);
	
	return 0;
}

