#include <stdio.h>
#include <math.h>

//Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: 
//"Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B. (MANZANO, p. 74) 

int main () {
    int vetorA[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int vetorB[15];

    printf("vetor A = {");
    for (int i = 0; i < 15; i++){
        switch (i){
            case 14:
                printf("%d}\n", vetorA[i]);
                break;
            default:
                printf("%d, ", vetorA[i]);
        }
    }

    printf("vetor B = {");
    for (int i = 0; i < 15; i++){
        vetorB[i] = ceil(pow(vetorA[i], 2));
        switch (i){
            case 14:
                printf("%d}", vetorB[i]);
                break;
            default:
                printf("%d, ", vetorB[i]);
        } 
    }
}