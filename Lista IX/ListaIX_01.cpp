/*
T�tulo: Vetor easy
Descri��o: Crie um vetor de 10 elementos e inicialize-o com valores de 10 a 19. Imprima todos os valores do
vetor.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Vari�veis Locais
	int Num[10];
	
	for(int i = 0; i < 10; i++){
		Num[i] = 10 + i;
		printf("%d - ", Num[i]);
	}
	
	return 0;
}
