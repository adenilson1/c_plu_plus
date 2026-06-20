// Tipos de Variáveis

#include<stdio.h>
#include<stdlib.h>
#include<locale.h> // localização

void main(){
    // Permite usar acentos
    // printf() escrever texto
    // printf("%d", a) -> escrever valor de uma variavel e o tipo dela, no caso d -> inteiro
    // pular uma linha '\n'
    // ler um valor para uma variável: scanf("%d", &a), %d é o tipo inteiro e '&' -> siginifica o endereço da memoria

    setlocale(LC_ALL,"");
    printf("Olá Mundo!\n");

    int a = 5;
    int b = 20;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", a + b);


    // Concatenando string com int
    printf("O valor é =  %d\n", a + b);

    // ler valor da variavel a
    printf("Novo valor de a  = ");
    scanf("%d", &a);
    printf("O valor de 'a' mudou para %d\n", a);

    printf("\n");
    // Números flutuantes -> %f
    float c = 5.4;
    printf("O valor de c = %f\n", c);
    printf("Novo valor de c  = ");
    scanf("%f", &c);
    setbuf(stdin, 0);
    printf("O valor de 'c' mudou para %f \n", c);

    printf("\n");

    // Tipo char -> letras unitarias -> %c
    // Toda vez que se muda de tipo de variavel, é recomendado limpar o buffer, antes
    // da leitura do char com a função fflush(stdin)-> limpar buffer ou em alguns casos o setbuf no ecanf
    // anterior para limpar o teclado setbuf(stdin, 0)

    char letra = 'a';
    printf("O valor da letra é: %c \n", letra);
    printf("A nova letra é: ");
    scanf("%c", &letra);
    printf("O valor da 'letra' mudou para %c\n", letra);
}
