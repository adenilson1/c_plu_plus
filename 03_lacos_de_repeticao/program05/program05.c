#include<stdio.h>
#include<stdlib.h>

int main(){
    int var1 = 0;
    int var2 = 0;

    while(var1 < 10 || var2 > 10){
        printf("\nDigite valores maiores que 10 \n");

        printf("Digite valore pra variavel 1: ");
        scanf("%d", &var1);
        printf("Digite valore pra variavel 2: ");
        scanf("%d", &var2);

    }

    printf("Fim");

    return 0;

}
