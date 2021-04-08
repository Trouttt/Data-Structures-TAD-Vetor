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
};
void removeElement(){              //remove um elemente(no caso, substitui ele por 0);
    printf("\nQual elemento voce gostaria de deletar?");
    scanf("%d", &element);
    for(i = 0; i < numElement; i++ ){
        if(Set[i] == element){
            Set[i] = 0;
            printf("\nElemento deletado:%d", element);
            validator = 1;
        };
    };
    for(i = 0; i < numElement; i++ ){
        printf("| %d ", Set[i]);
    }
};
void testNumber(){
    validator = 0;
    printf("\nQual elemento vocÊ gostaria de verificar se existe no conjunto?");
    scanf("%d", &element);
    for(i = 0; i < numElement; i++ ){
        if(Set[i] == element){
            printf("%d existe dentro do conjunto\n", element);
            validator = 1;
        }
    };
    if(validator == 0){
        printf("%d nao existe dentro deste conjunto\n", element);
    }
};
void testEmpty(){
    if(Set[0] == 0){
        printf("vetor nulo");
    }else{
        printf("vetor nao nulo");
    }
};