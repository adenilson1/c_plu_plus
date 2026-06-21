#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Criar um algoritmo que leia 3 valores inteiros de uma
    //vez e coloque os resultados da multiplicação entre os 3
    //em uma variável própria, depois exiba essa variável
    printf("## MULTPLICAÇÃO DE 3 NUMEROS NA MESMA LINHA\n\n");

    // Define variaveis
    int num1, num2, num3, resultado;

    // Entrada de valores
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Leitura dos tres numeros

    printf("\nOs três números são: %d, %d, %d", num1, num2, num3);

    // Multiplicação dos 3 números
    resultado = num1 * num2 * num3;

    // Imprimi os valor do resultado
    printf("\n\n O reusltado da multiplicalção: %d * %d * %d = %d", num1, num2, num3, resultado);

    printf("\n");
    system("pause");
}
