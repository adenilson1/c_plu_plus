#include<stdio.h>
#include<stdlib.h>

/*
Programa que le um numero inteiro e informe se ele é par ou não
*/

int main(){
    printf("###PROGRAMA QUE ANALISE UM NUMERO EH PAR OU NAO###\n\n");

    // Definindo variaveis
    int numero, resultado;

    // Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    //Analise
    printf("Resultado: ");

    if(numero%2 == 0){
        printf("par");
    }else{
        printf("impar");
    }

    return 0;
}
