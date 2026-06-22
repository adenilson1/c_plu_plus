#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
PROGRAMA QUE SOMA DOIS NUMEROS QUE ESTAO NO INTERVALO DE 5 A 10
*/

int main(){
    int min = 5, max =10, num1, num2, resultado;
    bool teste = false;

    while( teste != true){
            printf("Digite um dois numeros no intervalo de 5 a 10\n\n");
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo  numero: ");
            scanf("%d", &num2);
            printf("\n");

            if((num1 < min || num1 > max) || (num2 > max || num2 < min)){
                printf("Algum numero fora do intervalo de 5 a 10\n");
                printf("Tente novamente\n\n");
                teste = false;
            }else{
                resultado = num1 + num2;
                teste = true;
            }


    }
    printf("\n");
    printf("Resultado = %d", resultado);

    return 0;

}
