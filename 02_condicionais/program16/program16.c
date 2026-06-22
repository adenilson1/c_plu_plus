// Usando valor maximo e valor minimo

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // Usa o tempo atual como semente
    srand(time(NULL));

    // Cria um numero aleatorio de 5 a 14
    int maximo = 14;
    int minimo = 5;

    //Traduzindo para a formula
    //  14 - 5    + 1 - 10

    int r = (rand() % (maximo - minimo + 1)) + minimo;
    //Entao teremos um numero de 0 a 9 + 5
    //ou seja, o minimo sera 5 e maximo sera 14

    //Imprime o numero gerado
    printf("Numero gerado: %d", r);

    return 0;

}
