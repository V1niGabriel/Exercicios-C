/*
Conteudo: Passagem de parametro por valor -> Somente uma copia do valor e passado para a fun��o. Tanto que a cada passagem 
de valor um novo lugar na mem�ria � ocupado para guardar o valor

*/


#include<stdio.h>
#include<locale.h>

void altera_valor(int x){
	                         x = 5; //tenta aletrar o valor da variavel x
	printf("Valor dentro da fun��o: %d\n", x); //Uma c�pia do valor � passada 
}


int main(){
	int x = 10;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Valor original: %d\n", x); 
	altera_valor(x);
	printf("Valor ap�s a fun��o: %d\n", x);
	
	return 0;
}
