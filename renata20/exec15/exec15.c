#include <stdio.h>

// Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo. 
// A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. 
// Esta série se caracteriza pela soma de um termo atual com o seu anterior subseqüente, para que seja formado o próximo valor da seqüência. 
// Portanto começando com os números 1, 1 o próximo termo é 1+1=2, o próximo é 1+2=3, o próximo é 2+3=5, o próximo 3+5=8, etc. (MANZANO, p. 66) 

int main () {

    int a = 0;
    int b = 1;

    // next é igual a A + B, no primeiro caso, 1.
    int next = a + b;


    // printa o primeiro caso da sequência, pois ela não conta com números negativos.
    printf("1: 0 + 0 >> 0\n");

    // De 2 (porque pulamos o primeiro passo 1 + 0) até 16 (porque 15 < 16)
    for (int i = 2; i < 16; i ++){

        printf("%d: %d + %d >> %d\n", i, a, b, next);

        // A passa a valer B
        a = b;
        // B passa a valer o valor de next (A + B)
        b = next;

        // next = (A + B), ou, nesse caso, next = (B + next)
        next = a + b;
        
    }

    return 0;
}