#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Programa que leia um numero inteiro
 e imprima na tela se ele está entre 0 e 10
*/

int main(){

    printf("###PROGRAMA QUE LE UM NUMERO INTEIRO E VEJA SE ELE ESTA ENTRE 0 E 10###\n\n");

    // Definindo variaveis
    int numero;

    // Entrada de dados
    printf("Digite o numero inteiro: ");
    scanf("%d", &numero);

    // Analise
    printf("\nO numero esta entre 0 e 10 ? : ");
    if(numero > 0 && numero < 10){
        printf("sim");
    }else{
        printf("nao");
    }

    return 0;
}
