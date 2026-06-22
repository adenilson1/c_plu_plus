#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
PROGRAMA QUE IMPRIME OS NUMEROS PARES DE 10
ATÉ UM NUMERO INFORMADO PELO USUARIO
*/

int main(){
    int i = 10, numero;
    bool teste = false;

    while( teste != true){
            printf("Digite um numero inteiro maior que 10: ");
            scanf("%d", &numero);
            printf("\n");
            if(numero < i){
                printf("Numero menor que 10\n");
                printf("Tente novamente\n\n");
                teste = false;
            }else{
                while(i <= numero){
                        if( i % 2 == 0){
                            printf("O numero par eh: %d\n", i);
                        }
                        i += 1;

                }
                teste = true;
            }
    }

    return 0;

}
