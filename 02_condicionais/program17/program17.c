#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
PROGRAMA QUE JOGA 3 DADOS (SEIS LADOS)
ALEATORIO E EXIBE O RESULTADO DA SOMA DOS 3 VALORES
NA TELA
*/

int main(){
    printf("###PROGRAMA QUE JOGA 3 DADOS DE FORMA ALEATORIA E SOMA OS VALORES DO LADOS###\n\n");

    // Usando o tempo atual como semente
    srand(time(NULL));

    // Criando numeros aleatorios de 1 a 6
    int minimo = 1;
    int maximo = 6;

    // Definindo variaveis
    int dado1, dado2, dado3;

    // Atribuindo valores aleatorios
    dado1 = (rand() % (maximo - minimo + 1)) + minimo;
    dado2 = (rand() % (maximo - minimo + 1)) + minimo;
    dado3 = (rand() % (maximo - minimo + 1)) + minimo;

    printf("Valores: %d - %d - %d\n", dado1, dado2, dado3);

    // Soma dos valores
    int resultado = dado1 + dado2 + dado3;
    printf("\nResultado da soma dos 3 dados eh %d\n", resultado);

    return 0;
}
