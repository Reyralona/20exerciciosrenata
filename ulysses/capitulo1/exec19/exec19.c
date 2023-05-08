/*

19 . a) Existe alguma diferença entre a instrução while do exercício anterior e a instrução do-while a seguir?
     b) Quantas vezes o corpo do laço do-while será executado? 
     c) Quais serão os valores de x e y imediatamente após a saída desse laço?


     a) No laço de repetição while, a expressão é avaliada no topo do código. No do-while, a expressão
        é avaliada no final. Isso faz com que as instruções dentro do escopo do laço sejam executadas pelo menos uma vez.
     b) A mesma quantidade de vezes do que o laço while. Nesse caso, 5.
     c) X = 5, Y = 5.
*/

#include <stdio.h>

int main (){

    int counter = 0;
    long x = 0L, y = 10L;

    do {
        counter++;
        x++;
        y--;
    } while (x < y);

    printf("counter: %d\nx: %d\ny: %d\n", counter, x, y);

    return 0;
}