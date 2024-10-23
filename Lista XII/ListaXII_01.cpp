/*
Titulo: Gerador de ipos de Dados
Descricao:Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme 
solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horário e texto que descreve o compromisso.
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
	
	//Atribuição da DATA
	compromissos.calendario.dia = 22;
	compromissos.calendario.mes = 10;
	compromissos.calendario.ano = 2024;
	
	//Atribuição do Horário
	compromissos.saida.hora = 19;
	compromissos.saida.minuto = 49;
	compromissos.saida.segundos = 58;
	
	//Atribuição do Compromisso
	strcpy (compromissos.detalhe, "Evento de Tecnologia!!");
	
	//Imprimir Resultado
	printf("%s -> Data de comparecimento: %d/%d/%d - Horário: %d:%d:%d", compromissos.detalhe, compromissos.calendario.dia, 
	compromissos.calendario.mes, compromissos.calendario.ano, compromissos.saida.hora, compromissos.saida.minuto, 
	compromissos.saida.segundos);
	
	return 0;
}
