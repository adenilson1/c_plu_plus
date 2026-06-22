#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;

    while(i != 10){

        printf("Digite 10 para finalizar o programa: ");
        scanf("%d", &i);
    }

    printf("Fim");
    return 0;
}
