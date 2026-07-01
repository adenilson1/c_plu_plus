#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    int numero;
    int cont = 0;

    setlocale(LC_ALL, "portuguese");

    printf("Programa que analisa se um numero é primo ou nao : \n\n");

    printf("\nDigite um numero interio : ");
    scanf("%d", &numero);

    for(int i = 2; i <= abs(numero); i++){
        if(numero%i == 0){
            cont ++;
        }
    }

    if(cont == 1){
        printf("Numero primo\n");
    }else{
        printf("Não é numero primo");
    }

    return 0;
}
