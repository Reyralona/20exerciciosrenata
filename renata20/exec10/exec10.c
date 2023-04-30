#include <stdio.h>
#include <math.h>

//Apresentar os quadrados dos números inteiros de 15 a 200. (MANZANO, p. 50) 

int main(){

    // Perceba que não declaramos nenhuma variável.

    // Este loop começa do número 15 e vai até o número 200. (200 < 201)
    for (int i = 15; i < 201; i++){
        // O quadrado do número i (contador) é igual a pow(i, 2) == (i²)
        printf("O quadrado de %d e >> %.0f\n", i, pow(i, 2));
    }
}