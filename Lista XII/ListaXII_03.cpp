/*
Titulo: Banco de Dados automático
Descricao: Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
Autor: Vinicius Gabriel
Data de Criação: 22/10/2024
*/

//Bibliotecas 
#include <stdio.h>
#include <locale.h>

//structs
typedef struct{
	char nome[50];
	int Num_matricula;
	char curso[20];
}Registro;

int main(){
	//Declaracao de variaveis
	Registro registro[5];
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	for (int i = 0; i < 5; i++){
		printf("Nome: ");
		fgets(registro[i].nome, 50, stdin);
		fflush(stdin);
		
		printf("Nº da matrícula: ");
		scanf("%d", &registro[i].Num_matricula);
		fflush(stdin);

		printf("Curso: ");
		fgets(registro[i].curso, 30, stdin);
		fflush(stdin);
	}
	
	//Imprimie os resultados
	for (int i = 0; i < 5; i++){
		printf("\nNome:%sMatrícula:%d\nCurso:%s", registro[i].nome, registro[i].Num_matricula, registro[i].curso);
	}
	
	return 0;
}
