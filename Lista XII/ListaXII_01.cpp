/*
Titulo: Gerador de ipos de Dados
Descricao:Escreva um trecho de c�digo para fazer a cria��o dos novos tipos de dados conforme 
solicitado abaixo:
� Hor�rio: composto de hora, minutos e segundos.
� Data: composto de dia, m�s e ano.
� Compromisso: composto de uma data, hor�rio e texto que descreve o compromisso.
Autor: Vinicius Gabriel
Data de Criacao: 22/10/2024
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
	int hora;
	int minuto;
	int segundos;
}Horario;

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	char detalhe[50];
	Horario saida;
	Data calendario;
	
}Compromisso;

int main(){
	//Definindo um vetor de 3 pontos;
	Compromisso compromissos;
	
	//UTF-8
	setlocale(LC_ALL,""); 
	
	//Atribui��o da DATA
	compromissos.calendario.dia = 22;
	compromissos.calendario.mes = 10;
	compromissos.calendario.ano = 2024;
	
	//Atribui��o do Hor�rio
	compromissos.saida.hora = 19;
	compromissos.saida.minuto = 49;
	compromissos.saida.segundos = 58;
	
	//Atribui��o do Compromisso
	strcpy (compromissos.detalhe, "Evento de Tecnologia!!");
	
	//Imprimir Resultado
	printf("%s -> Data de comparecimento: %d/%d/%d - Hor�rio: %d:%d:%d", compromissos.detalhe, compromissos.calendario.dia, 
	compromissos.calendario.mes, compromissos.calendario.ano, compromissos.saida.hora, compromissos.saida.minuto, 
	compromissos.saida.segundos);
	
	return 0;
}
