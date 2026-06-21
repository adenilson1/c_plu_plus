// Condicional if(){}

/*
    Operadores logicos
    == -> igual
    >  -> maior que
    <  -> menor que
    >= -> maior ou igual
    >= -> menor ou igual
    != -> diferente
*/

// Exemplo
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Definindo variave
    int idade;

    // lendo variavel
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Analisando se é maior de idade
    if(idade > 17){
        printf("Maior de idade");
    }else{
        printf("Menor de idade");
    }

    return 0;

}
