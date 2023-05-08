/*

14 . Por que o programa a seguir imprime : "O valor de 2/3 é 0.0000"?
    
    int main(){
        float produto = 2/3;
        printf("O valor de 2/3 e %f\n", produto);
        return 0;
    }

    A operação atribuída na variável produto primeiro é avaliada em INT, e depois em float, pois o resultado da
    expressão é avaliado primeiro. Como 2/3 retorna 0.66, esse número transformado em INT vira 0. E depois, transformado
    em float, vira 0.0000. Para obter o resultado desejado, deve-se aplicar a conversão explícita do valor
    da expressão em float, como a seguir: 

*/

#include <stdio.h>

int main(){
        float produto = (float) 2/3;
        printf("O valor de 2/3 e %f\n", produto);
        return 0;
    }