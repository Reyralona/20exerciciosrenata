#include <stdio.h>

// inclui uma nova biblioteca chamada math.h, que contém várias operações matemáticas úteis. (raíz quadrada, potenciação, seno, cosseno, etc)
#include <math.h>

//Ler dois inteiros (variáveis A e B) e imprimir o 
//resultado do quadrado da diferença do primeiro valor pelo segundo. (MANZANO, p. 26)

int main(){

    // declara duas variáveis inteiras A e B
    int A, B;
    printf("Insira o valor de A: \n");

    // escaneia e salva o valor de A
    scanf("%d", &A);
    
    printf("Insira o valor de B: \n");

    // escaneia e salva o valor de B
    scanf("%d", &B);

    // efetuamos o cálculo pow(A - B, 2), que significa (A-B)². Essa operação retorna um tipo float.
    printf("O quadrado da diferenca entre A e B e: %.1f", pow(A - B, 2));

    return 0;
}