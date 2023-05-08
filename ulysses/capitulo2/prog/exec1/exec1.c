/*

1 . Escreva um programa em C que imprima o seguinte na tela:

    Meu nome e [apresente aqui seu nome]
    Sou [aluno ou aluna] do curso [nome do curso] e este e meu primeiro programa em C.
    Digite uma tecla seguida de ENTER para encerrar o programa:

*/

#include <stdio.h>
int main() {
    char c;
    char nome[] = "Fulano de Tal";
    char genero[] = "aluno";
    char curso [] = "Engenharia da Computacao";

    printf("Meu nome e [%s]", nome);
    printf("\nSou [%s] do curso [%s] e este e meu primeiro programa em C.", genero, curso);
    printf("\nDigite uma tecla seguida de ENTER para encerrar o programa:");
    c = getchar();

    return 0;
}