/*
Arranjos Heterog�neos

S�o structs que armazenam informa��es de tipo diferentes, ou seja, dados agregados.

structs ou register = registro;

A defini��o de uma struct � feita pela declara��o do tipo de dado e, em seguida, das vari�veis que ela cont�m.

structu Ponto{
	float x;
	float y;
}

Como acessar seus membros usando o operador

struct Ponto p1;
p1.x = 10;
p1.y = 20;

A palavra-chave typedef � usada para criar um novo nome (ou alias) para um tipo de dado. Com estruturas, o typedef � 
frequentemente utilizado para simplificar o c�digo, evitando a necessidade de repetir a palavra struct ao declarar vari�vis

typedef struct{
	float x;
	float y;
} Ponto;

Ponto p2;
p2.x = 5.0;
p2.y = 8.0;

/*

/*
Vetor de struct

Armazena v�rias inst�ncias de uma estrutura em uma sequ�ncia cont�nua de mem�ria
*/




