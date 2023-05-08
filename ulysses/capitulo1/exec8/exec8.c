/*

8 . Assuma a existência das seguintes definições de variáveis num programa em C:
    int m = 5, n = 4;
    float x = 2.5, y = 1.0;

    Quais serão os valores das seguintes expressões?
    a ) m + n + x - y;        ---> 10.5
    b ) m + x - (n + y);      ---> 4.0
    c ) x - y + m + y / n;    ---> 6.75
    d ) m += n + x - y;       ---> 10.5
    e ) m /= x*n + y;         ---> 6.75
    f ) n %= y + m;           ---> Error.
    g ) n += y -= m           ---> 6.75

*/

#include <stdio.h>
#include <conio.h>

int main() {
    int m = 5, n = 4;
    float x = 2.5, y = 1.0;
   
    printf("a) %f\n", m + n + x - y);
    printf("b) %f\n", m + n - (n + y));
    printf("c) %f\n", x - y + m + y / n);
    printf("d) %f\n", m += n + x - y);
    printf("e) %f\n", m /= x*n + y);
    //printf("f) %f\n", n %= y + m);
    printf("g) %f\n", n += y -= m);

    return 0;
}