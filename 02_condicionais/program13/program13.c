#include<stdio.h>
#include<stdlib.h>

/*
PROGRAMA CALCULADORA QUE LER DOIS VALORES E MOSTRA A SOMA OU A SUBTRACAO
*/

int main(){
    printf("PROGRAMA CALCULADORA DE SOMA E SUBTRACAO\n\n");

    //Definindo variaveis
    int opcao, num1, num2, resultado;

    // Entrada de dados
    printf("\nDigite o primeiro valor interio: ");
    scanf("%d", &num1);
    printf("Digite o segundo  valor interio: ");
    scanf("%d", &num2);

    //Opções
    printf("\nESCOLHA A OPERACAO        \n");
    printf("1 - SOMAR                   \n");
    printf("2 - SUBTRAIR                \n");

    printf("\nOPCAO: ");
    scanf("%d", &opcao);



    //Menu
    switch(opcao){
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        default:
            printf("OPCAO INVALIDA!!!");
            resultado = 0;
            break;
    }

    printf("\nResultado = %d\n", resultado);

    return 0;

}
