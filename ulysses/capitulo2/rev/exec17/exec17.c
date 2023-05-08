/*

17 . Por que o programa a seguir acredita que zero não é zero?

    int main() {
        int numero;
        printf("Introduza um numero inteiro: ");
        scanf("%d", &numero);

        if (numero =! 0){
            printf("O numero NAO e zero!\n");
        } else {
            printf("O numero e zero\n.");
        }

        return 0;
    }

    O problema deste código se encontra na linha 6, onde o operador de comparação foi acidentalmente
    invertido pelo programador. "= !" significa que "numero" está recebendo o valor inverso de 0 (1), e não
    comparando o valor de "numero" com 0.
    Segue abaixo a implementação correta do problema:

*/

#include <stdio.h>
int main() {
        int numero;
        printf("Introduza um numero inteiro: ");
        scanf("%d", &numero);

        if (numero != 0){
            printf("O numero NAO e zero!\n");
        } else {
            printf("O numero e zero.\n");
        }

        return 0;
    }