#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// Operações Matemáticas
void main(){
    // Definindo variáveis
    int a = 6, b = 2;

    // OPERAÇÕES MATEMÁTICAS

    // Soma
    printf("Soma: %d + %d = %d", a, b, a + b);

    // Subtração
    printf("\nSubtracao: %d - %d = %d", a, b, a - b);

    // Multiplicação
    printf("\nMultiplicacao: %d * %d = %d", a, b, a * b);

    // Divisão
    printf("\nDivisao: %d / %d = %d", a, b, a / b);

    //Resto da Divisão
    printf("\nO resto da divisao: %d e %d = %D", a, b, a%b);

    // Valor absoluto
    printf("\nO valor absoluto de |-3| = %d\n", abs(-3));

    system("pause");

}
