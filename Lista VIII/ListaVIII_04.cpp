/*
T�tulo: Preenchimento autom�tico de 10 posi��es
Descri��o: Crie um programa que preencha automaticamente (usando l�gica, n�o apenas atribuindo 
diretamente) um vetor num�rico com 10 posi��es, conforme abaixo
Data de Cria��o:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Vari�veis locais
	int Num[10];
	
	//Loop de inser��o dos valores
	for (int i = 0; i < 10; i++){
		if ((i % 2)== 0){
			Num[i] = (5);
		}
		else {
			Num[i] = (3);
		}
	}
	
	//Saida de dados
	for (int i = 0; i < 10; i++){
		printf("%d, ", Num[i]);
	}
	
	return 0;
	
}
