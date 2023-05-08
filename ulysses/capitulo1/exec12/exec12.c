/*

12 . Dadas as seguintes iniciações:
    int j = 0, = 1, n = -1;
    Quais serão os resultados de avaliação das seguintes expressões em C?
    a ) m++ - --j;
    b ) m += ++j*2;
    c ) m * m++

*/

#include <stdio.h>

int main (){

    int j = 0, m = 1, n = -1;

    
    // printf("%d\n", m++ - --j); // 1 (m + 1) - (- 1 (--j)) = 2

    // printf("%d", m += ++j*2); // 1 += 1 ((++j) * 2 = 2) = 3.

    // printf("%d", m * m++); // 1 * 2(m++) = 2

    return 0;
}