#include <stdio.h>

// Apresentar todos os números divisíveis por 4 que sejam menores que 200. 
// Para verificar se o número é divisível por 4, efetuar dentro da malha a verificação lógica desta condição com a instrução se, 
// perguntando se o número é divisível; sendo, mostre-o; não sendo, passe para o próximo passo. 
// A variável que controlará o contador deve ser iniciada com o valor 1. (MANZANO, p. 50) 

int main () {

    int i = 1;

    do {
        if (i % 4 == 0){
            printf("%d\n", i);
        }

        i++;
    }
    while (i < 200);


    return 0;
}