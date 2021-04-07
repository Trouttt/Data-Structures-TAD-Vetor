#include <stdio.h>

int cont, element;

typedef struct {
    int vet[];
} vet;

void createSet(); //cria um conjunto.
void insertElement(); //insere um elemento no conjunto.
void removeElement(); // remove um elemento do conjunto.
void testNumber(); //testa se um número pertence ao conjunto.
void lowerValue(); //verifica se é o menor valor.
void unionSet(); //esta função irá unir os dois conjuntos
void testSameSet(); //esta função irá verificar 
void testEmptySet(); //verifica se é um conjunto vazio