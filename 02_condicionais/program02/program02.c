#include<stdio.h>
#include<stdlib.h>

int main(){
    //Definindo variave
    int idade;

    // lendo variavel
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Analisando se é maior de idade
    if(idade < 17){
        printf("Menor de idade");
    }else if(idade == 18){
        printf("Tem que se alistar");
    }else{
        printf("Maior de idade");
    }

    return 0;

}
