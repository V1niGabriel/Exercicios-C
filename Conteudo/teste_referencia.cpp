/*
CoT�tulo: Jogo de corrida usando Dado
Descri��o: 
a) O usuario escolhe a quantidade de jogadores;
b) O usuario escolhe o tamanho do tabuleiro;
c) A cada rodada, os ogadores jogam um dado (1 a 6) e andam nas casas do tabuleiro;
d) cada rodada deve mostrar os numeros sorteados de cada jogador e a posicao deles no tabuleiro;
e) Ganha quem atingir o final do tabuleiro com o numero exato;
f) Se um jogador sobrepuser a posi��o de outro jogador, o que foi sobreposto retorna ao in�cio do jogo.
Autor: Vinicius Gabriel
Data de Cria��o: 08/10/2024
*/

#include<stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void Inicializacao(int *a, int *b){
	*a = 5; //altera o valor da vari�vel orginal
	*b = 5; //altera o valor da vari�vel orginal
	
	printf("Quantidade de Jogadores:");
	scanf("%d", &*a);
	printf("Tamanho do Tabuleiro:");
	scanf("%d", &*b);
	
	printf("Valor dentro da fun��o: %d %d\n", *a, *b);
}

//retorna um valor aleatorio entre 0 e 6
int aleatorio(){
	srand (unsigned(time(NULL)));
	
	int random = 1 + (rand() % 6); 
	
	return(random);
}

int main(){
	//Variaveis Locais
	int Quantidade_jogador = 0;
	int Tamanho_Tabuleiro = 0;
	int andar;
		
	setlocale(LC_ALL,""); //UTF-8
	
	printf("Valor original: %d %d\n", Quantidade_jogador, Tamanho_Tabuleiro); //valor original
	Inicializacao(&Quantidade_jogador, &Tamanho_Tabuleiro); //o '&' aponta a posi��o da mem�ria onde o valor est� localizado
	
	int vet[Tamanho_Tabuleiro];
	for(int i = 0; i < Tamanho_Tabuleiro; i++){
		vet[i] = 0;
	}
	
	int Posicao_jogador[Quantidade_jogador];
	for(int i = 0; i < Quantidade_jogador; i++){
		Posicao_jogador[i] = 0;
	}
	
	printf("Valor ap�s a fun��o: %d %d\n", Quantidade_jogador, Tamanho_Tabuleiro); //valor alterado
	
	int controller = 1; //Controla qual jogador por rodada
	while (vet[Tamanho_Tabuleiro] == 0){
		printf("%d jogador", controller);
		andar = aleatorio();
		for(int i = 0; i <= andar; i++){
			int a;
			if((i + 1) == andar){
				vet[i + Posicao_jogador[a]] = controller;
				Posicao_jogador[a] = i; 
			}
		}
		controller++;
		if (controller == Quantidade_jogador + 1){
			controller = 1;
		}
		
	}
	
	return 0;
}
