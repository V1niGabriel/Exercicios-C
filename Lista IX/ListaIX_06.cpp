/*
T�tulo: Vetor easy
Descri��o:  Leia 10 n�meros inteiros para um vetor e pe�a ao usu�rio para inserir um valor. Conte quantas
vezes o valor inserido aparece no vetor.
Autor: Vinicius Gabriel
Data de cria��o: 17/09/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//Vari�veis Locais
	int Num[10];
	int chave, contador;	
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	printf("Insira um valor entre 0 e 20\n");
	printf("N�mero: ");
	scanf("%d", &chave);
	
	printf("\nDigite 10 valores\n");
	//Loop de inser��o dos valores no vetor
	for(int i = 0; i < 10; i++){
		printf("Valor: ");
		scanf("%d", &Num[i]);
		
		if (Num[i] == chave){
			contador++;
		}
	}
	
	//Saida da quantidade
	printf("\nQuantas vezes que a chave aparece: %d", contador);
	
	return 0;
}
