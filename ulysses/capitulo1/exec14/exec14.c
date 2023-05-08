/*

14 . Considere o seguinte trecho de programa:

    int i, j = 4;

    i = j * j++;

    Mostre que, se j for avaliado primeiro, a expressão j * j++ resultará em 16.
    E se j++ for avaliado primeiro, a expressão resultará em 20.

    Se j for avaliado primeiro, j = 4, j ++ (em tempo real) = 4. 4 * 4 = 16.
    Se j++ for avaliado primeiro, j = 4, j ++ = 5. 4 * 5 = 20.

*/

#include <stdio.h>

int main () {

    int j = 4, i;
    printf("%d", j++ * j);

    return 0;
}