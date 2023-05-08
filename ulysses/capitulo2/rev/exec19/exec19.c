/*

19 . Por que o programa a seguir não imprime o resultado desejado?

    int main(){

        float resultado = 7.0 / 22.0;

        printf("Resultado da divisao: %d\n", resultado);
        return 0;
    }

    O programa faz o uso do indicador incorreto de formatação na função printf. Ele tenta imprimir um valor
    float com o indicador "%d", que é usado para imprimir valores inteiros.

    Segue abaixo a implementação correta do programa: 
*/

#include <stdio.h>

    int main(){

        float resultado = 7.0 / 22.0;

        printf("Resultado da divisao: %f\n", resultado);
        return 0;
    }