/*
Titulo: Inversão de String
Descricao: Escreva uma função que inverta uma string sem usar a função. A função deve modificar a 
string original.
Autor: Vinicius Gabriel
Data de criacao: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
	//Declaração de variáveis
	char str[20];
	char inversor[20];
	int y = 0; //controlador do inversor
	
	printf("Digite:");
	fgets(str, 20, stdin);
	
	int tam = (strlen(str));
	
	//Retira o \n que o fgets pode adicionar antes do \0 
	if(str[tam - 1] == '\n'){
		str[tam - 1] = '\0';
		tam--;
	}
	
	for (int i = tam - 1; i >= 0; i--){
		inversor[y] = str[i]; 
		y++;
	}
	
	inversor[y] = '\0'; //Fecha a string invertida
	
	printf("\nOriginal: %s\nInverso: %s\n", str, inversor);
	
	return 0;
}
