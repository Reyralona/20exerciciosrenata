#include <stdio.h>

// Elaborar um programa que efetue a leitura de um número inteiro e 
// apresentar uma mensagem informando se o número é par ou ímpar. (MANZANO, p. 41) 

int main () {

    // Declara num do tipo inteiro.
    int num;

    printf("Insira um numero: \n");

    // Lê um número e atribui o valor à variável num
    scanf("%d", &num);

    // Para saber se um número é par ou não, precisamos saber o RESTO da divisão desse número por 2.
    // Por exemplo: 10 % 2 = 0. Porque 10 dividido por 2 é igual a 5, e sobra 0. (Pois a divisão retorna um valor "não quebrado") 


    // Se o resultado da operação "número % 2" for igual ("==") a 0:
    if (num % 2 == 0){
        // Printe que o número é par
        printf("O numero %d e par.", num);
    } else { // SENÃO
        // Printe que o número é impar
        printf("O numero %d e impar.", num);
    }

    return 0;
}