#include <stdio.h>

//Ler quatro números inteiros e apresentar o resultado da adição e multiplicação, baseando-se na utilização do conceito da propriedade distributiva. 
//Ou seja, se forem lidas as variáveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D. Depois B com C, B com D e por fim C com D. 
//Perceba que será necessário efetuar seis operações de adição e seis operações de multiplicação e apresentar doze resultados de saída. (MANZANO, p. 26)

// C (iteratable, n) =          n!
//                           --------
//                          (r!(n-r)!)

int main(){
    int A, B, C, D;
    
    
    printf("Insira 4 numeros >> \n");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    // sums
    //printf("%d %d %d %d", A, B, C, D);
    printf("====== SUMS ========\n");
    printf("A + B = %d\n", A + B);
    printf("A + C = %d\n", A + C);
    printf("A + D = %d\n", A + D);
    printf("B + C = %d\n", B + C);
    printf("B + D = %d\n", B + D);
    printf("C + D = %d\n", C + D);

    printf("====== MULT ========\n");
    printf("A * B = %d\n", A * B);
    printf("A * C = %d\n", A * C);
    printf("A * D = %d\n", A * D);
    printf("B * C = %d\n", B * C);
    printf("B * D = %d\n", B * D);
    printf("C * D = %d\n", C * D);

    return 0;
}