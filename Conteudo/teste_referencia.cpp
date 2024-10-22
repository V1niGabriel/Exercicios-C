/*
Titulo: Jogo de corrida usando Dado
Descricao: 
a) O usuario escolhe a quantidade de jogadores;
b) O usuario escolhe o tamanho do tabuleiro;
c) A cada rodada, os ogadores jogam um dado (1 a 6) e andam nas casas do tabuleiro;
d) cada rodada deve mostrar os numeros sorteados de cada jogador e a posicao deles no tabuleiro;
e) Ganha quem atingir o final do tabuleiro com o numero exato;
f) Se um jogador sobrepuser a posicao de outro jogador, o que foi sobreposto retorna ao inicio do jogo.
Autor: Vinicius Gabriel
Data de Criacao: 08/10/2024
*/

//Biblioteca
#include <stdio.h>	
#include <locale.h> 
#include <time.h>
#include <stdlib.h>
#include <unistd.h> 

//Recolhe do usuario as informações de inicializacao do jogo
void Inicializacao(int *a, int *b){	
	printf("Quantidade de Jogadores:");
	scanf("%d", &*a);
	printf("Tamanho do Tabuleiro:");
	scanf("%d", &*b);
	printf("\n");
}

//retorna um valor aleatorio entre 0 e 6
int aleatorio(){
	srand (unsigned(time(NULL)));
	
	int random = 1 + (rand() % 6); 
	
	return(5);
}

void sobreposicao(int vetortab[], int vetor_jogador[], int y, int jogador){ 
	 if ((vetortab[y] =! 0) && (vetortab[y] =! jogador)){
	 	int valor = vetortab[y];
	 	vetor_jogador[valor - 1] = 0;
		printf("jogador %d voltou para casa 0!", jogador);
	 }
}

int main(){
	//Variaveis Locais
	int Quantidade_jogador = 0;
	int Tamanho_Tabuleiro = 0;
	int andar;
		
	setlocale(LC_ALL,""); //UTF-8
	
	Inicializacao(&Quantidade_jogador, &Tamanho_Tabuleiro); //o '&' aponta a posicaoo da memoria onde o valor esta localizado
	
	int vet[Tamanho_Tabuleiro]; //Cria o vetor tabuleiro com a quantidade de casas proposta
	for(int i = 0; i < Tamanho_Tabuleiro; i++){
		vet[i] = 0;
	}	
	int Posicao_jogador[Quantidade_jogador]; //vetor que armazena a posicao dos jogadores
	for(int i = 0; i < Quantidade_jogador; i++){ 
		Posicao_jogador[i] = 0;
	}
	
	//Loop central do jogo. Permite que as rodadas funcionem corretamente
	for (int jogador = 1; jogador <= Quantidade_jogador; jogador++){
		int controlador = jogador - 1; //jogador - 1, pois o vetor comeca no indice 0. Controla o indice de vetor de cada jogador
		
		printf("Jogador %d\n", jogador);
		printf("Casa Inicial: %d\n", Posicao_jogador[controlador]); 

		int alet = aleatorio(); 		//alet recebe o valor da funcao aleatorio
		printf("Dado: %d\n", alet);		//Imprimi o valor do dado, no caso, alet
		
		int position = Posicao_jogador[controlador]; //Guarda a posicao do respectivo jogador
		
		//X começa na casa que o jogador (1,2,...) parou e anda a quantidade de casa correspondente que tirou no dado
		for (int x = position; x <= (position + alet); x++){ 
			if (x == (position + alet)){
				sobreposicao(vet, Posicao_jogador, x, jogador); //Chama a funcao sobreposicao
				vet[x] = jogador; //Adiciona o jogador em sua respectiva casa dentro do tabuleiro
				Posicao_jogador[controlador] = x; //atualiza o vetor que guarda a posicao de cada jogador (jogadorY --> PosicaoX)
				 
			}
		}
		printf("Casa Final: %d\n\n", Posicao_jogador[controlador]);
		
		//Verifica se algum jogador ganhou
		if (Posicao_jogador[controlador] >= Tamanho_Tabuleiro){ 
			printf("Jogador %d VENCEU", jogador);
			break;
		}
		
		//Retornar ao primeiro jogador ao chegar no último jogador
		if (jogador == Quantidade_jogador){
			jogador = 0;
		}
		sleep(1.5); //Pausa o programa pelo tempo determinado em segundos
	}

	return 0;
}
