#include<stdio.h>
#include<stdlib.h>

/*
programa que le 2 numeros inteiros e imprime na tela se algum é maior que 10
*/

int main(){

    printf("###PROGRAMA QUE LE 2 NUMEROS INTEIROS E ANALISA SE UM DELES EH MAIOR QUE ZERO###\n\n");

    // Definindo variaveis
    int num1, num2;

    // Entrada de dados
    printf("Digiete dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Analise
    printf("Algum dos dois numeros eh maior que 10: ");

    if(num1 > 10 || num2 > 10){
        printf("sim");
    }else{
        printf("nao");
    }


    return 0;
}
