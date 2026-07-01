#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){

    setlocale(LC_ALL, "");

    printf("Contagem de numeros de 10 até zero usando o while: \n");

    int var1 = 10;

    while(var1 >= 0){
        printf("%d\n", var1);
        var1 --;
    }

    printf("-----------------------------\n");

    printf("Contagem de numeros de 10 até zero usando o do while: \n");


    do{

        if(var1 < 0){
            var1 = 10;
        }
        printf("%d\n", var1);
        var1 --;

    }while(var1 >= 0);

    printf("-----------------------------\n");

    printf("Contagem de numeros de 10 até zero usando o for: \n");

    for(var1 = 10 ; var1 >= 0; var1 --){
            printf("%d\n", var1);
    }

    return 0;


}
