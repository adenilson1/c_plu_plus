#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
    setlocale(LC_ALL,"");

    // Criar um algoritmo que leia duas notas e mostre a média entre elas.

    // Definindo as variáveis
    float nota1, nota2, media;

    // Entrada de valores valores
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    // Leitura da 1ª nota e 2ª nota
    printf("\n1ª nota: %.2f", nota1);
    printf("\n2ª nota: %.2f", nota2);

    // Media das notas
    media = (nota1 + nota2)/2;

    // Imprime a média
    printf("\n\nA media = %.2f", media);

    printf("\n");
    system("pause");
}
