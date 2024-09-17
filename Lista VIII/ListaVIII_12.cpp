/*
T�tulo: Leitor de NOTAS
Descri��o: Fa�a um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um vetor. No final, 
mostre:
a) Qual � a m�dia da turma
b) Quantos alunos est�o acima da m�dia da turma
c) Qual foi a maior nota digitada
d) Em que posi��es a maior nota aparece
Autor: Vinicius Gabriel
Data de Cria��o: 17/09/2024
*/


//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	//vari�veis Locais
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
	
	//C�lcula a m�dia da turma
	media = soma / 10;
	
	//Verifica quantos alunos est�o acima da m�dia
	int contador = 0;
	for(int i = 0; i != (sizeof(Nota) / sizeof(Nota[0])); i++){
		if (Nota[i] > media){
			contador++;
		}
	}
	
	//Saida de dados
	//a) Qual � a m�dia da turma
	printf("M�dia da Turma: %d\n", media);
	
	//b)Quantos alunos est�o acima da m�dia da turma
	printf("Quantidade de alunos acima da m�dia: %d\n", contador);
	
	//C) Qual foi a maior nota digitada
	printf("Maior nota alcan�ada: %d\n", maior);
	
	//d) Em que posi��es a maior nota aparece
	printf("Posi��o da maior nota: %d\n", local);
	
	return 0;
}
