/*

    a ) Quantas vezes o corpo do laço while do exemplo a seguir será executado?
    b ) Quais serão os valores de x e y imediatamente após a execução desse laço?

    long x = 0L, y = 10L;

    while (x < y){
        x ++;
        y ++;
    }

    a ) O laço while será executado 5 vezes. Pois x incrementará em 5 vezes e y decrementará em 5 vezes. Os valores se encontrarão
        na metade do maior valor. No caso, 5.

    b ) Os valores de ambos x e y são iguais a 5. Ao se tornarem iguais, o laço while é interrompido.
*/

#include <stdio.h>

int main () {
    int counter = 0;
    long x = 0L, y = 10L;

    while (x < y){
        counter++;
        x++;
        y--;
    }

    printf("%d\n%ld\n%ld\n", counter, x, y);
}