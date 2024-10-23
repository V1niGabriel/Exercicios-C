/*
Arranjos Heterogêneos

São structs que armazenam informações de tipo diferentes, ou seja, dados agregados.

structs ou register = registro;

A definição de uma struct é feita pela declaração do tipo de dado e, em seguida, das variáveis que ela contém.

structu Ponto{
	float x;
	float y;
}

Como acessar seus membros usando o operador

struct Ponto p1;
p1.x = 10;
p1.y = 20;

A palavra-chave typedef é usada para criar um novo nome (ou alias) para um tipo de dado. Com estruturas, o typedef é 
frequentemente utilizado para simplificar o código, evitando a necessidade de repetir a palavra struct ao declarar variávis

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

Armazena várias instâncias de uma estrutura em uma sequência contínua de memória
*/




