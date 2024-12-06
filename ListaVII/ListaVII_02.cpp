/*
T�tulo: Folha de Trabalho
Descri��o: Fa�a um algoritmo que:
a) Solicite ao usu�rio o valor para a vari�vel HT (horas trabalhadas no m�s);
b) Solicite ao usu�rio o valor para a vari�vel VH (valor hora trabalhada):
c) Solicite ao usu�rio o valor para a vari�vel PD (percentual de desconto);
d) Calcule o sal�rio bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o sal�rio l�quido => SL = SB � TD;
g) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio Liquido
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main() {
	//Declra��o de vari�veis localListaVII_02
	int HT ;  //Horas trabalhadas
	float VH; //Valor hora trabalhada
	float PD; // Percentual de desconto
	float SB; //sal�rio bruto
	float TD; //desconto total
	float SL; //Sal�rio L�quido
	
	setlocale(LC_ALL, "");
	
	//Entrada de dados
	printf("Horas trabalhadas:");
	scanf("%d", &HT);
	
	printf("Valor Hora trabalhada:");
	scanf("%f", &VH);
	
	printf("Percentual de desconto:");
	scanf("%f", &PD);
	
	//C�lculo do sal�rio bruto
	SB = HT * VH;
	
	//C�lculo Total do desconto
	TD = (PD/100) * SB;
	
	//C�lculo Sal�rio l�quido
	SL = SB - TD;
	
	//Sa�da de informa��es
	printf(" Horas Trabalhadas: %d\n Sal�rio Bruto: R$%.2f\n Desconto: R$%.2f\n Sal�rio L�quido: R$%.2f", HT, SB, TD, SL);
	
	return 0;
}

