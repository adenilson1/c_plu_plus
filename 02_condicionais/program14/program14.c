// Gerar numeros aleatorios
// biblioteca: time.h

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //usando o tempo atual como semente
    srand(time(NULL));

    // Cria um numero aleatorio de 0 a 9
    int r = rand()%10;

    // Imprime o numero gerado
    printf("Numero gerado: %d", r);

    return 0;
}
