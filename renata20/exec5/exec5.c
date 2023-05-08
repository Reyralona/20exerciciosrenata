#include <stdio.h>

//Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente. (MANZANO, p. 41)

int main(){

    // declara três variáveis do tipo inteiro.
    int A, B, C;

    // lê três variáveis do tipo inteiro ("%d") e atribui a variável, respectivamente.
    printf("Insira o valor de A, B e C >> \n");
    scanf("%d%d%d", &A, &B, &C);

    // A é menor que B?
    if (A > B) {
        // Se sim, armazene A numa variável temporária chamada temp
        int temp = A;
        // A agora vale B
        A = B;
        // B agora vale temp.
        B = temp;

        // O que esse  truque faz? troca dois valores de lugar.
        // Ex:
        // A = 6, B = 3
        // temp = A (temp vale 6)
        // A = B (A agora vale 3)
        // B = temp (B agora vale 6)
        // 
        // Se verificarmos:
        // A = 3, B = 6.
    }
    if (B > C) {

        // Repetimos o mesmo processo entre B e C
        // Note que agora, independente dos valores, se B > C
        // O último valor da lista é obrigatoriamente o maior.
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {

        // Por fim, já que o valor de B mudou, verificamos se A é maior que ele.
        // Se for, obrigatoriamente ele é o menor valor.
        int temp = A;
        A = B;
        B = temp;
    }

    // Printa os 3 dígitos A B C respectivamente
    printf("%d, %d, %d", A, B, C);

    return 0;
}