/*

6 . Qual é a diferença entre os tipos _Bool e bool?

    O tipo _Bool é um tipo incluso na linguagem C que guarda valor booleano e o representa como unsigned ints 1 ou 0.
    O tipo bool é um tipo incluso no cabeçadlho "stdbool.h" que guarda um macro "true" ou "false" que correspondem a 1 ou 0.

*/

//#include <stdbool.h>
#include <stdio.h>

int main () {

    _Bool bool1 = 1;
    //bool bool2 = true;

    printf("%d\n", bool1);
    //printf("%d\n", bool2);

    return 0;
}