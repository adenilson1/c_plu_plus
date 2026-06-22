
#include<stdio.h>
#include<stdlib.h>

/*
Crie um programa que leia dois números
inteiros e imprima na tela se a soma deles é:
maior/igual a 10
menor que 10
*/

int main(){
    printf("##Programa de leitura a analise da soma entre dois numeros inteiros##\n\n");

    // Definindo variaveis
    int num1, num2, resultado;

    // Entrada de dados
    printf("Entre com primeiro valor: ");
    scanf("%d", &num1);
    printf("Entre com segundo valor: ");
    scanf("%d", &num2);


    // Soma
    resultado = num1 + num2;
    printf("Resultado da soma = %d", resultado);

    // Analise em comparação a 10
    printf("\n\nAnalise em comparacao a 10: ");
    if(resultado >= 10){
        printf("\n%d >= 10", resultado);
    }else{
        printf("\n%d < 10", resultado);
    }


    return 0;

}
