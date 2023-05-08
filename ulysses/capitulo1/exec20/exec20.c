/* 

20 . Na instrução for a seguir, a a expressão j++ pode ser substuída por ++j sem alterar 
    a funcionalidade da instrução? Por que?

    Sim, a expressão pode ser substuída, pois ela será avaliada antes das instruções dentro do escopo serem
    executadas.

*/

#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    for (int i = 1; i <= 10; ++i){
        printf("%d\n", i);
    }
}