#include<stdio.h>
#include<stdlib.h>

/*
PROGRAMA QUE LE 2 NUMEROS INTEIROS
E IMPRMI SE A SOMA DELES ESTIVER ENTRE
0 E 10 OU A SOMA FOR PAR
*/

int main(){

    printf("###PROGRAMA QUE LE 2 NUMEROS E ANALISA SE A SOMA DELES ESTA ENTRE 0 E 10 OU SE A SOMA EH PAR###\n\n");

    //Definindo variaveis
    int num1, num2, resultado;

    // Entrada de dados
    printf("Digite o primerio numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo  numero inteiro: ");
    scanf("%d", &num2);
    printf("\n");
    // Soma
    resultado = num1 + num2;

    // Analise
    printf("Resultado\n\n");

    if((resultado > 0 && resultado <10) || (resultado%2 == 0)){
        printf("O resultado esta entre 0 e 10 ou eh par");
    }else{
        printf("O resultado NAO esta entre 0 e 10 e NAO eh par");

    }


    return 0;
}
