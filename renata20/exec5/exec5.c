#include <stdio.h>

//Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente. (MANZANO, p. 41)

int main(){
    int A, B, C;

    printf("Insira o valor de A, B e C >> \n");
    scanf("%d%d%d", &A, &B, &C);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    printf("%d, %d, %d", A, B, C);

    return 0;
}