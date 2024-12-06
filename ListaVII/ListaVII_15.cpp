/*
T�tulo: Agenda Personalizada
Descri��o: Crie as fun��es para uma agenda que armazena apenas 1 contato. 
Autor: Vinicius Gabriel
Data de Cria��o: 29/08/2024
*/

//Bibliotecas
#include <stdio.h>
#include <locale.h>

//Vari�veis Globais
char Armazenamento[18];

void inserirContato(){ //Permite armazena um conjunto de n�meros na vari�vel
	printf("Digite o n�mero:");
	fgets(Armazenamento, 18, stdin);
	setbuf(stdin, 0);
}

void excluirContato(){ //Apaga os valores na string
	Armazenamento[0] = '\0';
	printf("Contato Excluido\n");
}

void consultacontato(){ //Apresenta na tela o contato Salvo
	printf("Contato Salvo: %s\n", Armazenamento);
}

void alterarContato(){ //Altera o n�mero salvo na string
	printf("Novo n�mero: ");
	fgets(Armazenamento, 18, stdin);
	setbuf(stdin, 0);
	printf("N�mero Salvo!\n");
}

int main(){
	//Vari�veis Locais
	int option;
	
	//UTF-8
	setlocale(LC_ALL,"");
	
	//Chamada da Agenda Telef�nica
	do{
		printf("\nAgenda Telef�nica\n");
		printf("1. Inserir Contato\n");
		printf("2. Excluir Contato\n");
		printf("3. Consultador Contato\n");
		printf("4. Alterar Contato\n");
		printf("5. Sair\n");
		printf("nescolha uma das op��es:");
		scanf("%d", &option);
		while ((getchar()) != '\n');
		
		switch(option){
			case 1:
				inserirContato();
				break;
			case 2:
				excluirContato();
				break;
			case 3:
				consultacontato();
				break;
			case 4:
				alterarContato();
				break;
			case 5:
				printf("\nAgenda Telef�nica fechada");
				break;
			default:
				printf("Comando N�o existe! TENTE NOVAMENTE!\n");
				break;
		}		
	} while (option != 5);
	
	return 0;
}
