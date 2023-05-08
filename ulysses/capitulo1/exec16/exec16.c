/*

16 . A instrução a seguir é legal em C? Explique.
    ( 1 + 2 ) * 4;

    Sim. Nesse caso, os parênteses mudam a precedência entre o operador de multiplicação e o de adição para resolver
    a expressão dentro dos mesmos antes.

*/

#include <stdio.h>

int main () { 

    int i =  (1 + 2) * 4;
    printf("%d", i);


    return 0;
}