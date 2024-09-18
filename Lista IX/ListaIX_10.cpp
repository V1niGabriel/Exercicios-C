/*
T�tulo: Vetor easy
Descri��o: Leia dois vetores de 6 elementos e calcule o resultado da multiplica��o elemento a elemento dos
dois vetores.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Passagem por valor e refer�ncia - estudar.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//Vari�vel local
	int Num1[4] = {1,1,1,1}, Num2[4]={1,1,1,1};
	int contador;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Semente Aleat�rio
	srand(unsigned(time(NULL)));
	
	//Entrada dos dados no vetor
	/*for(int i = 0; i < 4; i++){
		Num1[i] = rand() % 10;
		Num2[i] = rand() % 10;
	}*/
	
	//Verifica se s�o iguais
	for(int i = 0; i < 4; i++){
		if (Num1[i] == Num2[i]){
			contador++;	
		}
	}
	
	if (contador == 4){
		printf("Os vetores s�o iguais\n");
	}
	else {
		printf("Os vetores s�o diferentes\n");
	}
	
	return 0;
}

