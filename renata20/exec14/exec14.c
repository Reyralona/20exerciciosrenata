#include <stdio.h>

// Elaborar um programa que apresente como resultado o valor de uma potência de uma base qualquer 
// elevada a um expoente qualquer, ou seja, de BE , em que B é o valor da base e E o valor do expoente. 
// Observe que neste exercício não pode ser utilizado o operador de exponenciação do portuguol (^).(MANZANO, p. 66) 

int main () {


    // variáveis do tipo inteira chamadas base e expoente
    int base, expoente;
    // variável do tipo inteiro chamada resultado inicializada em 1.
    int resultado = 1;

    printf("Insira base e expoente separados por espaco >> \n");
    scanf("%d%d", &base, &expoente);

    // Exemplo: 2³
    // De 1 até expoente+1 (4) (O que nos fará ir de 1 até 3, pois 3 < 4)
    for (int i = 1; i < expoente+1; i++){
        // O resultado é a multiplicação da base pelo número de vezes do expoente.
        // 2³ == 2 * 2 * 2.
        // Ou seja, a base multiplicada por ela mesma três vezes.
        resultado *= base;
    }

    printf("O resultado e %d", resultado);

    return 0;
}