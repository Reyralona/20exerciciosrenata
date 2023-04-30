#include <stdio.h>

// Efetuar a leitura de cinco números inteiros e 
// identificar o maior e o menor valores. (MANZANO, p. 41)

int main()
{
    int A, B, C, D, E;
    
    printf("Insira cinco numeros inteiros: \n");
    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);

    int arr[5] = {A, B, C, D, E};
    int maior = arr[0];
    int menor = arr[0];

    for (int i = 0; i < 5; i++){
        
        if (arr[i] > maior){
            maior = arr[i];
        }
        if (arr[i] < menor){
            menor = arr[i];
        }
    }
    
    printf("menor >> %d\nmaior >> %d", menor, maior);


    return 0;
}