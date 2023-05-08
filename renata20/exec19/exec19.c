#include <stdio.h>

// Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os mesmo elementos da matriz A, sendo que deverão estar invertidos. 
// Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e assim por diante. 
// Apresentar as matrizes A e B lado a lado. (MANZANO, p. 74) 

int main () {

    int vetorA[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int vetorB[20];

    int count = 0;

    // Apenas conta o vetor A de trás pra frente, salvando cada valor no índice correto do vetor B.
    for (int i = 19; i > -1; i--){
        vetorB[count] = vetorA[i];
        count++;
    }

    printf("Vetor B = {");
    for (int i = 0; i < 20; i++){
        switch (i){
            case 19:
                printf("%d}", vetorB[i]);
                break;
            default:  
                printf("%d, ", vetorB[i]);
        }  
    }

    return 0;
}