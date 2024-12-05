/*
Título: Troca de ocorrências l1 e l2
Descrição: Faça um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em uma 
string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario.
Autor: Vinicius Gabriel
Data de Criação: 17/08/2024
*/

#include <stdio.h>

int main() {
	char str[100], str_morph[100], alter[3], select[2];
	int fim, i = 0, c;
	
	printf("Digite uma palvra:");
	fgets(str, 100, stdin);
	
	for (fim = 0; str[fim] != '\0' && str[fim] != '\n'; fim++) ; 
	
	printf("Escolha uma letra para");
	printf("\nAlterar:");
	fgets(select, 2, stdin);
	while ((c = getchar()) != '\n' && c != EOF); //limpar o buffer
	
	printf("Para:");
	fgets(alter, 2, stdin);
	
	while(i < fim) {
		str_morph[i] = str[i];
		if (str[i] == select[0]) {
			str_morph[i] = alter[0];
		}
		i++;
	}
	
	printf("%s", str_morph);
	return 0;
}
