#include "Set.h"


void createSet(){  //cria um conjunto.
    printf("Quantos deseja adicionar no conjunto?");
    scanf("%d", &numElement);
    Set = (int *) malloc( numElement * sizeof(int));
} 
void insertElement(){   //insere um elemento no conjunto.
    for(i = 0; i < numElement; i++){
        printf("Insira um novo elemento no array:");
        scanf("%d", &element);
        Set[i] = element;
        printf("%d\n", Set[i]);
    };
} 
void removeElement(){
    
}
