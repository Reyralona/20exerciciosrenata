#include <stdio.h>

// Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. 
// Construir uma matriz C, sendo esta a junção das duas outras matrizes. 
// Desta forma, C deverá ter a capacidade de armazenar 50 elementos. Apresentar a matriz C. (MANZANO, p. 74) 

int main (){

    int vetorA[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int vetorB[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int vetorC[50];

    for (int i = 0; i < 20; i++){
        vetorC[i] = vetorA[i];
    }

    for (int i = 0; i < 30; i++){
        vetorC[i + 20] = vetorB[i]; 
    }

    printf("Vetor C = {");
    for (int i = 0; i < 50; i++){
        switch (i) {
            case 49:
                printf("%d}", vetorC[i]);
                break;
            default:
                printf("%d, ", vetorC[i]);
        }   
    }
 
    return 0;
}