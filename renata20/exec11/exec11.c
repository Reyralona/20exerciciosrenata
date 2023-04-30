#include <stdio.h>

//Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500. (MANZANO, p. 50) 

int main (){

    // Variável do tipo inteira chamada contador inicializada com o valor ZERO.
    int count = 0;

    // De 0 até 501...
    for (int i = 0; i < 501; i++){
        // Incrementamos o valor de count pelo valor de i.
        // Ou seja, quando i for 1, count é 1.
        // Quando i for 2, count é 1 + 2.
        // Quando i for 3, count é 3 + 3...
        count += i;
    }

    printf("%d", count);


}