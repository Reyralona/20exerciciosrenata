#include <stdio.h>

// Efetuar a leitura de cinco números inteiros e 
// identificar o maior e o menor valores. (MANZANO, p. 41)

int main()
{
    // Declara cinco variáveis do tipo inteiro.
    int A, B, C, D, E;
    
    printf("Insira cinco numeros inteiros: \n");
    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);

    // Cria uma lista de tamanho 5 chamada arr, contendo dentro dela os valores de A, B, C, D, E
    int arr[5] = {A, B, C, D, E};

    // INICIALIZA uma variável inteira chamada maior, como sendo o primeiro valor da lista arr
    int maior = arr[0];
    // INICIALIZA uma variável inteira chamada menor, como sendo o primeiro valor da lista arr
    int menor = arr[0];

    // O loop for se consiste em três partes. Todas separadas por ";"
    // (int i = 0; ) = Começa um contador inteiro chamado i em 0
    // (i < 5;)      = Enquanto esse contador for menor do que 5
    // (i++)         = Incremente em 1.
    // Ou seja, esse for loop começa com um contador em 1, e esse contador é incrementado até atingir 4 (Porque é menor do que 5).
    for (int i = 0; i < 5; i++){
        
        // O índice i da lista arr é maior do que o valor armazenado na variável maior?
        if (arr[i] > maior){
            // Se sim, o valor da variável maior agora é igual ao valor do índice i da lista.
            maior = arr[i];
        }

        // O índice i da lista arr é menor do que o valor armazenado na variável menor?
        if (arr[i] < menor){
            // Se sim, o valor da variável menor agora é igual ao valor do índice i da lista.
            menor = arr[i];
        }
    }
    
    // Printa em duas linhas o valor de menor e maior, pois a string possui um "\n" no meio.
    printf("menor >> %d\nmaior >> %d", menor, maior);


    return 0;
}