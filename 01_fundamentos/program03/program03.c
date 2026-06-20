#include<stdio.h>
#include<stdlib.h>

void main(){

    // Definindo variáveis
    int a = 5, b;

    printf("%d\n\n", a);

    // Concatenando
    printf("O valor da var a eh: %d ", a);

    // Mudando o valor de a
    a = 15;
    // Concatenando
    printf("\nO valor da var a eh: %d ", a);

    // lendo valores
    scanf("%d", &b);
    // Concatenando
    printf("\nO valor da var b eh: %d ", b);

    //Pula linha
    printf("\n");

    // Imprimindo
    printf("Oi Mundo!\n");

    // Pausando
    system("pause");
}
