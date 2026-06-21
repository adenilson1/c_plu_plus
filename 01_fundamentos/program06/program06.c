#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    // Criar um algoritmo que leia duas notas e mostre o valor absoluto entre elas
    printf("## CALCULO DO VALOR ABSOLUTO DA DIFERENÇA ENTRE DUAS NOTAS ##\n\n");
    // Definindo variaveis
    float nota1, nota2, valor_absoluto;

    // Entrada de notas
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);


    // Leitura de notas
    printf("\nA 1ª nota = %.2f\n", nota1);
    printf("A 2ª nota = %.2f\n", nota2);

    // Calculo do valor absooluto da diferença entre as notas
    valor_absoluto = abs(nota1 - nota2);

    // Improme o valor absoluto da diferença
    printf("\nO valor absoluto da diferença: |%.2f - %.2f| = %.2f", nota1, nota2, valor_absoluto);

    printf("\n");
    system("pause");
}
