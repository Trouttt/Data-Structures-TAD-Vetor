#include "Set.h"


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
    printf("Qual elemento vocÊ gostaria de deletar?");
    scanf("%d", &element);
    for(i = 0; i < numElement; i++ ){
        if(Set[i] == element){
            Set[i] = 0;
        };
    };
    for(i = 0; i < numElement; i++ ){
        printf("%d | ", Set[i]);
    }
};
void testNumber(){
    printf("Qual elemento vocÊ gostaria de verificar se existe no conjunto?");
    scanf("%d\n", &element);
        for(i = 0; i < numElement; i++ ){
        if(Set[i] == element){
            printf("%d existe dentro do conjunto", element);
        }else{
            printf("não existe");
        };
    };
};
void lowerValue(){

};