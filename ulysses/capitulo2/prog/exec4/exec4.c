/*

4 . Escreva um programa em C que receba um número inteiro como entrada e determine se o mesmo é par ou ímpar.
    O programa deve terminar quando um número inteiro negativo for introduzido. A saída do programa deve
    ser algo como: "o numero introduzido é par.""

*/

#include <stdio.h>
int main (){
    int num;
    do {
        printf("Insira um numero inteiro positivo: ");
        scanf("%d", &num);

        if (num < 0){
            break;
        }
        if (num % 2 == 0){
            printf("%d e par.\n", num);
        }
        else {
            printf("%d e impar.\n", num);
        }


    } while (num >= 0);
}