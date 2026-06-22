#include<stdio.h>
#include<stdlib.h>

/*
PROGRAM QUE IMPRIME DE 50 ATE 0, DIMINUINDO DE 6 EM 6

*/

int main(){
    int numero = 50;

    while (numero > -1){

        printf("%d \n", numero);

        numero -= 6;
    }
    return 0;

}
