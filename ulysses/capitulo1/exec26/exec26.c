/*

26 . Suponha que soma e x sejam variáveis do tipo int iniciadas com 0. A instrução a seguir
    é portável? Explique.

*/

#include <stdio.h>

int main () {

    int x = 0, soma = 0;

    soma = (x = 2) + (++x);
    printf("%d", soma);
    return 0;
}