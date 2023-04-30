#include <stdio.h>
#include <math.h>

//Apresentar os quadrados dos números inteiros de 15 a 200. (MANZANO, p. 50) 

int main(){
    for (int i = 15; i < 201; i++){
        printf("O quadrado de %d e >> %.0f\n", i, pow(i, 2));
    }
}