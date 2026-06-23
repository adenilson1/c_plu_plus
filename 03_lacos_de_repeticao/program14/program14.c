#include<stdio.h>
#include<stdlib.h>

int main(){
    int min, max, cont;

    printf("Digite o valor minimo: ");
    scanf("%d", &min);

    printf("Digite o valor maximo: ");
    scanf("%d", &max);

    printf("Digite a contagem: ");
    scanf("%d", &cont);

    printf("\nValores no intervalo de %d ate %d na contagem de %d\n", min, max, cont);
    for(int i = min; i <= max; i+=cont){
        printf("%d \n", i);
    }

    return 0;

}
