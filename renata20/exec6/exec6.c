#include <stdio.h>

//Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3. (MANZANO, p. 41)

int main(){
    // Declara quatro variáveis do tipo inteiro.
    int A, B, C, D;

    printf("Insira 4 numeros inteiros >> \n");

    // Lê as quatro variáveis e a associa à sua respectiva letra
    scanf("%d%d%d%d", &A, &B, &C, &D);

    // Cria um vetor de tamanho 4, armazenando as quatro variáveis A, B, C, D.
    int vec[4] = {A, B, C, D};

    // De 0 até 4...
    for (int i = 0; i != 4; i++){
        // Se o valor no índice i do vetor vec for dividido por 2 e sobrar 0, printe que ele é divisível por 2.
        if (vec[i] % 2 == 0){
            printf("%d e divisivel por 2\n", vec[i]);
        }
        // Se o primeiro falhar, e se 
        // o valor no índice i do vetor vec for dividido por 3 e sobrar 0, printe que ele é divisível por 3.
        else if (vec[i] % 3 == 0){
            printf("%d e divisivel por 3\n", vec[i]);
        }
        // Se ambos falharem, printe que o valor no índice i do vetor vec não é divisível por nenhum.
        else {
            printf("%d nao e divisivel nem por 2, nem por 3.\n", vec[i]);
        }
    }

    return 0;
}