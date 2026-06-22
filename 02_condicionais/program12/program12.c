#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Menu                   \n");
    printf("1 - Espresso           \n");
    printf("2 - Cappuccino         \n");
    printf("3 - Macchiato          \n");
    printf("Escolha um opcao       \n");

    //Le a escolha
    int opcao;
    scanf("%d", &opcao);

    // Selecao
    switch(opcao){
        case 1:
            printf("Escpresso escolhido.");
            break;
        case 2:
            printf("Cappuccino escolhido.");
            break;
        case 3:
            printf("Macchiato escolhido.");
            break;
        default:
            printf("Opcao invalida!");
            break;
    }


    return 0;
}
