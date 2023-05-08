/*

13 . Explique por que a instrução abaixo não é portável (apesar de ser aceitável em C):

    j = (i + 1) * (i = 1)

    (i = 1) na expressão j permanentemente altera o valor de i. Ou seja, todos os comandos após esta linha
    trabalharão com i sendo igual a 1. Isso pode não ser de desejo do programador.

*/

#include <stdio.h>

int main () {

    int i = 2;
    int j = (i + 1) * (i = 1);
    printf("%d\n", j);
    printf("%d\n", i);
    return 0;
}