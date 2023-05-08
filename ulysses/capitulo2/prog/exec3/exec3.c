/*

3 . Escreva um programa em C que imprima as letrars de A a Z (maiúsculas) e seus respectivos valores decimais.

*/

#include <stdio.h>
int main () {

    for(int i = 65; i <= 90; i++){
        printf("%c = %d\n", i, i);
    }

    return 0;
}