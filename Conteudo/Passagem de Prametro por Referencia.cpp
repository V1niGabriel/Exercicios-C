/*
Conteudo: Passagem de parametro por REFERENCIA -> � repassado a posi��o de mem�ria do valor, de forma que cada modifica��o 
altera o valor REAL, n�o h� cria��o de uma c�pia do valor, logo n�o ocupa um novo espa�o de mem�ria.
'*' -> indica que o endere�o da mem�ria que est� sendo repassado
*/

#include<stdio.h>
#include <locale.h>

void altera_valor(int *num){
	*num = 5; //altera o valor da vari�vel orginal
	printf("Valor dentro da fun��o: %d\n", *num);
}

int main(){
	int x = 10;
	
	setlocale(LC_ALL,""); //UTF-8
	printf("Valor original: %d\n", x); //valor original
	altera_valor(&x); //o '&' aponta a posi��o da mem�ria onde o valor est� localizado
	printf("Valor ap�s a fun��o: %d\n", x); //valor alterado
	
	return 0;
}
