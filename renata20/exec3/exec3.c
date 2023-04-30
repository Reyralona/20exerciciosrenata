#include <stdio.h>
#include <math.h>

//Ler dois inteiros (variáveis A e B) e imprimir o 
//resultado do quadrado da diferença do primeiro valor pelo segundo. (MANZANO, p. 26)

int main(){

    int A, B;
    printf("Insira o valor de A: \n");
    scanf("%d", &A);
    printf("Insira o valor de B: \n");
    scanf("%d", &B);

    printf("O quadrado da diferenca entre A e B e: %.1f", pow(A - B, 2));

    return 0;
}