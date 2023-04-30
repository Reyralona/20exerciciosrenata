#include <stdio.h>

// Apresentar todos os números divisíveis por 4 que sejam menores que 200. 
// Para verificar se o número é divisível por 4, efetuar dentro da malha a verificação lógica desta condição com a instrução se, 
// perguntando se o número é divisível; sendo, mostre-o; não sendo, passe para o próximo passo. 
// A variável que controlará o contador deve ser iniciada com o valor 1. (MANZANO, p. 50) 

int main () {

    // Primeiro uso do DO -> WHILE.

    // Variável inteira chamada i inicializada em 1.
    int i = 1;

    // Faça...
    do {

        // Se o resto da divisão de i (1) por 4 for igual a 0, printe o seu valor.
        if (i % 4 == 0){
            printf("%d\n", i);
        }

        // Aumente o valor de i em 1
        i++;
    }

    // ... Enquanto i for menor do que 200.
    while (i < 200);


    return 0;
}