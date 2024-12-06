/*
T�tulo: Multiplos
Descri��o: Fa�a um algoritmo que imprima os m�ltiplos positivos de 7, inferiores a 1000.
Autor: Vinicius Gabriel
Data de Cria��o: 27/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	//Informativo
	printf("M�ltiplos positivos de 7 e inferiores a 1000:\n");
	
	//loop
	for(int i = 7; i < 1000; i++){
		//Verifica��o da condi��o matem�tica
		if ((i % 7) == 0){
			printf("%d - ", i);
		}
		else {
			continue;
		}
	}
	
	return 0;
}

