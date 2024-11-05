/*
Titulo: Concatenação de Strings
Descricao: Implemente uma função que receba duas strings como parâmetros e concatene a 
segunda na primeira, sem usar strcat()
Autor: Vinicius Gabriel
Data de criacao: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <stdio.h>
#include <string.h>

//Função de Concatenação
void Concatena(int tam, char *Str2, char *Str1){
	int x = 0;
	int i;
	for(i = tam; Str1[x] != '\0'; i++){
		Str2[i] = Str1[x];
		x++;
	}
	
	Str2[i] = '\0'; //Finaliza a String
}

int main(){
	char Str1[20];
	char Str2[50];
	int tam = 0;
	
	printf("Digite:");
	fgets(Str1, 20,stdin);
	fflush(stdin);
	
	tam = strlen(Str1);
	
	//Retira o \n que o fgets pode adicionar antes do \0 
	if(Str1[tam - 1] == '\n'){
		Str1[tam - 1] = '\0';
	}
	
	printf("Digite:");
	fgets(Str2, 20,stdin);
	fflush(stdin);
	
	tam = strlen(Str2);
	
	//Retira o \n que o fgets pode adicionar antes do \0 
	if (Str2[tam - 1] == '\n'){
		Str2[tam - 1] = '\0';
		tam--;
	}
	
	Concatena(tam, Str2, Str1);
	
	printf("Concatenado: %s", Str2);
	
	return 0;
}
