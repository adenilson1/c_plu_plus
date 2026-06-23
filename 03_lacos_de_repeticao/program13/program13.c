#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// PROGRAMA TABUADA

int main(){
    printf("PROGRAMA TABUADA\n\n");

    int numero;
    char operacao;
    bool val = false;

    while(val != true){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        setbuf(stdin, 0);

        printf("\n");

        printf("Escolha a operacao: +, -, *, /\n");
        printf("Operacao: ");
        scanf("%c", &operacao);

        printf("\n");

        switch(operacao){
            case '+':
                val = true;
                break;

            case '-':
                val = true;
                break;

            case '*':
                val = true;
                break;

            case '/':
                val = true;
                break;

            default:
                printf("\nOperacao invalida, tente novamente\n");
                val =false;
                break;
        }
    }
        printf("OPERACAO DE '%c' DO NUMERO %d\n\n", operacao, numero);
        for(int i = 1; i <= 10; i++){
            if(operacao == '+'){
                printf(" %d + %d = %d\n", numero, i, numero + i);

            }else if(operacao == '-'){
                if(numero - i >= 0){
                    printf(" %d - %d = %d\n", numero, i, numero - i);
                }

            }else if(operacao == '*'){
                printf(" %d * %d = %d\n", numero, i, numero * i);

            }else{
                if(numero%i == 0){
                    printf(" %d / %d = %d\n", numero, i, numero / i);
                }

            }
        }



    return 0;


}
