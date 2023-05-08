/*

9 . Explique a diferença entre os operadores prefixo e sufixo de incremento.

*/

#include <stdio.h>

int main () {
    int x = 1;
                                  // O efeito de ambos é o mesmo, o que muda é a apresentação do resultado.
    printf("%d\n", ++x);          // Printa o valor de x + 1, produzindo o resultado do efeito colateral.
    printf("real = %d\n", x);     // Printa o valor real de x.
    printf("%d\n", x++);          // Adiciona 1 ao valor de x, mas não produz o resultado do efeito colateral.
    printf("real = %d\n", x);     // Printa o valor real de x.
    

    return 0;
}