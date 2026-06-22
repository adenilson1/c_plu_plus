#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;

    while(i < 10){

        printf("Digite um numero maior que zero para finalizar: ");
        scanf("%d", &i);
    }

    printf("Fim");

    return 0;
}
