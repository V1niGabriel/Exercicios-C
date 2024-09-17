/*
Título: Leitor de NOTAS
Descrição: Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um vetor. No final, 
mostre:
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece
Autor: Vinicius Gabriel
Data de Criação: 17/09/2024
*/


//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//variáveis Locais
	int Nota[10];
	int soma, maior = 0, local, media;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Loop inicial
	for(int i = 0; i != (sizeof(Nota) / sizeof(Nota[0])); i++){
		printf("Aluno %d: ", (i + 1));
		scanf("%d", &Nota[i]);
		
		//Soma as notas
		soma += Nota[i];
		
		//Verifica a maior nota 
		if (Nota[i] > maior){
			maior = Nota[i];
			local = i;
		}
	}
	
	//Cálcula a média da turma
	media = soma / 10;
	
	//Verifica quantos alunos estão acima da média
	int contador = 0;
	for(int i = 0; i != (sizeof(Nota) / sizeof(Nota[0])); i++){
		if (Nota[i] > media){
			contador++;
		}
	}
	
	//Saida de dados
	//a) Qual é a média da turma
	printf("Média da Turma: %d\n", media);
	
	//b)Quantos alunos estão acima da média da turma
	printf("Quantidade de alunos acima da média: %d\n", contador);
	
	//C) Qual foi a maior nota digitada
	printf("Maior nota alcançada: %d\n", maior);
	
	//d) Em que posições a maior nota aparece
	printf("Posição da maior nota: %d\n", local);
	
	return 0;
}
