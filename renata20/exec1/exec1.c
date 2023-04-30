// Inclui uma bibliteca chamada stdio.h. stdio significa STANDARD INPUT OUTPUT, ou seja, operações para
// manipular entrada (scan) e saída (print) de dados na saída padrão (terminal).
#include <stdio.h>

//Ler quatro números inteiros e apresentar o resultado da adição e multiplicação, baseando-se na utilização do conceito da propriedade distributiva. 
//Ou seja, se forem lidas as variáveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D. Depois B com C, B com D e por fim C com D. 
//Perceba que será necessário efetuar seis operações de adição e seis operações de multiplicação e apresentar doze resultados de saída. (MANZANO, p. 26)


// int = Tipo inteiro
// main() = Função principal da linguagem C, é onde o programa de fato será executado.
// int main() = Declara a função principal como do tipo inteiro. Quando uma função tem um tipo, ao final da
// execução, essa função deverá retornar um valor do tipo inteiro.

int main(){
    // define quatro variáveis A, B, C, D do tipo inteiro.
    int A, B, C, D;
    
    // digita na tela o texto entre " e adiciona uma nova linha (\n) no final.
    printf("Insira 4 numeros >> \n");

    // espera o usuário digitar quatro números especificados por quatro "%d" = dígitos.
    // quando digitado, o valor é lido pelo scanf e atribuido ao valor do endereço da variável (&A).
    // portanto, se printarmos a variável A, ela retornará o valor digitado. Isso acontece em sequência pelas quatro variáveis
    // nesse caso.  
    scanf("%d%d%d%d", &A, &B, &C, &D);

    // sums
    // printa um texto aleatória para separar, seguido de uma nova linha
    // e cada operação a seguir é uma operação aritmética com as variáveis.
    // todas são seguidas por nova linha, senão operações diferentes vão ficar na mesma linha.
    // repeti o processo para as operações de multiplicação. (seguindo o enunciado da questão).
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


    // Retorne 0. A função do tipo inteiro chamada main() deve sempre retornar um valor inteiro.
    // Neste caso, 0 significa que a função foi executada corretamente.
    return 0;
}