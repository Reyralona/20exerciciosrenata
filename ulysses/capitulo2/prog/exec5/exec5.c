/*

5 . O programa a seguir contém erros sintáticos e resulta em mensagens de advertência
    quando se tenta compilá-lo usando a opção -Wall do compilador dcc:

    int main(void){
        int x, y, z;
        x = 10;
        y = 0;

        SCANF("%d", &z);
        printf("%d", y);

        return 0;
    }

    C é uma linguagem que distingue letras maiúsculas de minúsculas. Portanto, a função SCANF é diferente de scanf.
    A função SCANF não existe na biblioteca padrão, portanto, o compilador lança um erro de declaração implícita.

    Segue abaixo a implementação correta do programa:

*/

#include <stdio.h>
int main(void){
        int x, y, z;
        x = 10;
        y = 0;

        scanf("%d", &z);
        printf("%d", y);

        return 0;
    }