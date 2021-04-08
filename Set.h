#include <stdio.h>
#include <stdlib.h>

int cont, element, numElement, *Set, i;

void createSet(); //cria um conjunto.
void insertElement(); //insere um elemento no conjunto.
void removeElement(); //deleta um elemento do conjunto (substitui ele por 0);
void testNumber(); //testa se o número pertence ao conjunto
void testEmpty(); //testa se é vazio