#include <stdio.h>

//Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500. (MANZANO, p. 50) 

int main (){
    int count = 0;

    for (int i = 0; i < 501; i++){
        count += i;
    }

    printf("%d", count);


}