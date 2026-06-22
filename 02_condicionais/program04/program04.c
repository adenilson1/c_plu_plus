#include<stdio.h>
#include<stdlib.h>

/*
Programa que ler dois numeros intereiros
e imprima na tela qual é o maior deles ou se são iguais
*/

int main(){
    printf("###PROGRAMA QUE LE DOIS NUMEROS E COMPARA QUAL O MAIOR OU SE SAO IGUAIS###\n\n");

    // Definindo variaveis
    int num1, num2;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo  numero: ");
    scanf("%d", &num2);

    // Analise
    printf("\nResultado: ");

    if(num1 > num2){
        printf("%d > %d", num1, num2);
    }else if(num2 > num1){
        printf("%d > %d", num2, num1);
    }else{
        printf("%d == %d", num1, num2);
    }

    return 0;


}
