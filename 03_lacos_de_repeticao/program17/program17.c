#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MIN 10
#define MAX 20



int main(){

    setlocale(LC_ALL, "");
    printf("Programa que imprime os numeros pares de 10 a 20:\n");

    for(int valor = MIN; valor <= MAX; valor ++){
        if(valor%2 == 0){
            printf("%d\n", valor);
        }
    }

    return 0;

}
