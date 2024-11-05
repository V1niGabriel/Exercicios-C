/*
Titulo: LEITOR DE APROVACAO E REPROVACAO
Descricao: Fa�a um programa que leia os dados de 10 alunos (Nome, matricula, M�dia Final), armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o
vetor dos aprovados e o vetor dos reprovados, considerando a m�dia m�nima para a 
aprova��o como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos 
dados do vetor de reprovados.
Autor: Vinicius Gabriel
Data de Cria��o: 05/11/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
	char Nome[50];
	int Matricula;
	int Media;
}Registro;

typedef struct{
	char Nome[50];
	int Matricula;
	int Media;
}Aprovados;

typedef struct{
	char Nome[50];
	int Matricula;
	int Media;
}Reprovados;

int main(){
	//variavies
	int MediaMinima = 5;
	int QAprovados;
	int ControladorX = 0;
	int ControladorY = 0;
	
	//Declra��o da struct
	Registro registro[3];
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Declra��o dos estudantes
	for(int i = 0; i < 3; i++){
		printf("\nAluno %d\n", i+1);
		printf("Nome:");
		fgets(registro[i].Nome, 50, stdin);
		printf("Matr�cula:");
		scanf("%d", &registro[i].Matricula);
		fflush(stdin);
		printf("M�dia Final:");
		scanf("%d", &registro[i].Media);
		fflush(stdin);
		
		//Verifica��o da quantidade de aprovados
		if (registro[i].Media >= 5){
			QAprovados++;
		}
	}
	
	//Declra��o das structs de aprovados e reprovados
	Aprovados aprovados[QAprovados];
	Reprovados reprovados[3 - QAprovados];
	
	//Divis�o dos dados em aprovados e reprovados
	for(int i = 0; i < 3; i++){
		if (registro[i].Media >= 5){
			strcpy(aprovados[ControladorX].Nome, registro[i].Nome);
			aprovados[ControladorX].Matricula = registro[i].Matricula; 
			aprovados[ControladorX].Media = registro[i].Media;
			ControladorX++;
		}
		else {
			strcpy(reprovados[ControladorY].Nome, registro[i].Nome);
			reprovados[ControladorY].Matricula = registro[i].Matricula; 
			reprovados[ControladorY].Media = registro[i].Media;
			ControladorY++;
		}
	}
	
	//Output das informa��es
	printf("\nAprovados:\n");
	for(int i = 0; i < QAprovados; i++){
		printf("Nome: %sMatr�cula: %d\nM�dia Final: %d\n\n", aprovados[i].Nome, aprovados[i].Matricula, aprovados[i].Media);
	}
	
		printf("\nReprovados:\n");
	for(int i = 0; i < (3 - QAprovados); i++){
		printf("Nome: %sMatr�cula: %d\nM�dia Final: %d\n\n", reprovados[i].Nome, reprovados[i].Matricula, reprovados[i].Media);
	}
	
	return 0;
}
