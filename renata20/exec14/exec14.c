#include <stdio.h>

// Elaborar um programa que apresente como resultado o valor de uma potência de uma base qualquer 
// elevada a um expoente qualquer, ou seja, de BE , em que B é o valor da base e E o valor do expoente. 
// Observe que neste exercício não pode ser utilizado o operador de exponenciação do portuguol (^).(MANZANO, p. 66) 

int main () {

    int base, expoente;
    int resultado = 1;

    printf("Insira base e expoente separados por espaco >> \n");
    scanf("%d%d", &base, &expoente);

    for (int i = 1; i < expoente+1; i++){
        resultado *= base;
    }

    printf("O resultado e %d", resultado);

    return 0;
}