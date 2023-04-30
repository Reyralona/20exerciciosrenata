#include <stdio.h>
#include <math.h>

//Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: 
//"Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B. (MANZANO, p. 74) 

int main () {

    // Inicia dois vetores de tamanho 15, onde o vetor A possui termos definidos de 1 a 15
    // E o vetor B não possui nenhum.
    int vetorA[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int vetorB[15];

    // Printa um "{" pra enfeite.
    printf("vetor A = {");
    // De 0 até 15 ...
    for (int i = 0; i < 15; i++){
        // Um switch leva uma variável como argumento. Se essa variável se encaixar em qualquer um dos casos, o caso específico
        // é executado. Senão, o caso default é executado.
        switch (i){
            case 14:
                // Printa o número com "}" no final caso ele seja o último, por enfeite.
                printf("%d}\n", vetorA[i]);
                break;
            default:
                printf("%d, ", vetorA[i]);
        }
    }

    printf("vetor B = {");
    // De 0 até 15...
    for (int i = 0; i < 15; i++){
        // O valor do índice i no vetor B é igual ao valor do índice i no vetor A ao quadrado.
        // Se A[2] == 4, então, B[2] == 16.
        vetorB[i] = ceil(pow(vetorA[i], 2));

        // Mesmo caso com o switch.
        switch (i){
            case 14:
                printf("%d}", vetorB[i]);
                break;
            default:
                printf("%d, ", vetorB[i]);
        } 
    }
}