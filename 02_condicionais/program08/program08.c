#include<stdio.h>
#include<stdlib.h>

/*
PROGRAMA QUE LEIA 3 NUMEROS INTEIROS
E IMPRIMA NA TELA SE OS 3 SAO MAIORES QUE 10
*/

int main(){
    printf("###PROGRAMA QUE LE 3 NUMEROS INTEIROS E ANALISA SE SAO MAIORES QUE 10###\n\n");

    // Definindo variaveis
    int num1, num2, num3;

    //Entrada de dados
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Analise
    printf("O 3 numeros sao maiores que 10: ");

    if(num1 > 10 && num2 > 10 && num3 > 10){
        printf("sim");
    }else{
        printf("nao");
    }

    printf("\n");


    return 0;
}
