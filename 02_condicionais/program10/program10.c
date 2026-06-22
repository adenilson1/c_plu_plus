#include<stdio.h>
#include<stdlib.h>

/*
programa que le 2 numeros inteiros
e imprima se algum for par
*/

int main(){

    printf("PROGRAMA QUE LE 2 NUMEROS INTEIROS E ANALISA SE ALGUMA EH PAR\n\n");

    // Definindo variaveis
    int num1, num2;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo  numero: ");
    scanf("%d", &num2);

    // Analise
    printf("Algum dos dois numeros eh par ?: ");

    if((num1%2 == 0)||(num2%2 == 0)){
        printf("sim");
    }else{
        printf("nao");
    }

}
