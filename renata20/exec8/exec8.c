#include <stdio.h>

// Elaborar um programa que efetue a leitura de um número inteiro e 
// apresentar uma mensagem informando se o número é par ou ímpar. (MANZANO, p. 41) 

int main () {

    int num;

    printf("Insira um numero: \n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numero %d e par.", num);
    } else {
        printf("O numero %d e impar.", num);
    }

    return 0;
}