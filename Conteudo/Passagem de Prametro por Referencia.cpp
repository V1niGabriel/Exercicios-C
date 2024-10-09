/*
Conteudo: Passagem de parametro por REFERENCIA -> É repassado a posição de memória do valor, de forma que cada modificação 
altera o valor REAL, não há criação de uma cópia do valor, logo não ocupa um novo espaço de memória.
'*' -> indica que o endereço da memória que está sendo repassado
*/

#include<stdio.h>
#include <locale.h>

void altera_valor(int *num){
	*num = 5; //altera o valor da variável orginal
	printf("Valor dentro da função: %d\n", *num);
}

int main(){
	int x = 10;
	
	setlocale(LC_ALL,""); //UTF-8
	printf("Valor original: %d\n", x); //valor original
	altera_valor(&x); //o '&' aponta a posição da memória onde o valor está localizado
	printf("Valor após a função: %d\n", x); //valor alterado
	
	return 0;
}
