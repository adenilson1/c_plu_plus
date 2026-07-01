#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int main(){
    int numero;
    int cont = 0;
    bool verif_num = false;

    setlocale(LC_ALL, "portuguese");

    printf("Programa que analisa se um numero é primo ou nao : \n\n");


    // Verificação se o numero é maior que 1
    while(verif_num != true){
         printf("\nDigite um numero interio : ");
         scanf("%d", &numero);

         if(numero < 2){
            printf("\nVocê digitou um número menor ou igual 1\n");
            printf("Tente Novamente\n");
            verif_num = false;
         }else{
             verif_num = true;

         }
    }

    // resto de divisão
    for(int i = 2; i <= numero; i++){
        if(numero%i == 0){
            cont++;
        }
    }

    //Analise se o numero é primo
    if(cont == 1){
        printf("Numero primo\n");
    }else{
        printf("Não é numero primo");
    }

    return 0;
}
