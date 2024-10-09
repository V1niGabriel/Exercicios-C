/*
Conteudo: Passagem de parametro por valor -> Somente uma copia do valor e passado para a função. Tanto que a cada passagem 
de valor um novo lugar na memória é ocupado para guardar o valor

*/


#include<stdio.h>
#include<locale.h>

void altera_valor(int x){
	                         x = 5; //tenta aletrar o valor da variavel x
	printf("Valor dentro da função: %d\n", x); //Uma cópia do valor é passada 
}


int main(){
	int x = 10;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Valor original: %d\n", x); 
	altera_valor(x);
	printf("Valor após a função: %d\n", x);
	
	return 0;
}
