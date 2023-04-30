#include <stdio.h>

//Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3. (MANZANO, p. 41)

int main(){
    int A, B, C, D;

    printf("Insira 4 numeros inteiros >> \n");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    int vec[4] = {A, B, C, D};

    for (int i = 0; i != 4; i++){
        if (vec[i] % 2 == 0){
            printf("%d e divisivel por 2\n", vec[i]);
        } 
        else if (vec[i] % 3 == 0){
            printf("%d e divisivel por 3\n", vec[i]);
        }
        else {
            printf("%d nao e divisivel nem por 2, nem por 3.\n", vec[i]);
        }
    }

    return 0;
}