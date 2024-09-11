/*
Título: Preenchimento automático de 10 posições
Descrição: Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo 
diretamente) um vetor numérico com 10 posições, conforme abaixo
Data de Criação:10/09/2024
Autor: Vinicius Gabriel
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Variáveis locais
	int Num[10];
	
	//Loop de inserção dos valores
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
