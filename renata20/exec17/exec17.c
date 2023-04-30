#include <stdio.h>

// Ler duas matrizes A e B do tipo vetor com 15 elementos cada. 
// Construir uma matriz C, sendo esta a junção das duas outras matrizes. 
// Desta forma, C deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C. (MANZANO, p. 74) 

int main (){

    int vetorA[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int vetorB[15] = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int vetorC[30];

    for (int i = 0; i < 15; i++){
        vetorC[i] = vetorA[i];
        vetorC[i + 15] = vetorB[i];
    }


    printf("Vetor C = {");
    for (int i = 0; i < 30; i++){
        switch (i) {
            case 29:
                printf("%d}", vetorC[i]);
                break;
            default:
                printf("%d, ", vetorC[i]);
        }   
    }
 

    return 0;
}