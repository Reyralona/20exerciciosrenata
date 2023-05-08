/*

7 . Sejam f uma variável do tipo float, u uma variável do tipo unsigned int, i uma variável do tipo int, c uma
    variável do tipo signed char. Que valores serão atribuídos a f, u, i e c após a execução de cada umas
    seguintes instruções:

    a ) c = i = f = u = 23.5;  ---> c = ↨ (23 ascii);
                                    i = 23; 
                                    f = 23.0; 
                                    u = 23; 

    b ) i = u = f = c = 435;   ---> i = -77;
                                    u = 4294967219 (2^32 - 77, pois o valor -77 nunca chegará ao limite de tamanho
                                    de um tipo unsigned int, a variável é mupliplicada até que chegue, e chegamos no 77º índice
                                    contando a partir do último valor de 2^32);
                                    f = -77.0; 
                                    c =  "|" (char recebe -77 (pois é signed e 435 > 1 byte. Então -77 em ascii = (256(limite) - 77) = 147) 


    c ) f = c = i = u = -10;   ---> f = -10.0;
                                    c = ÷ (ascii 247 (256 - 10));
                                    i = -10;
                                    u = 4294967286 (2^32 - 10, mesma explicação);

*/

#include <stdio.h>

int main () {
    float f = 0.0;
    unsigned int u = 0;
    int i = 0;
    signed char c = 0;

    c = i = f = u = 23.5;
    printf("c == %c\n", c);
    printf("i == %d\n", i);   
    printf("f == %f\n", f);
    printf("u == %u\n", u);


    i = u = f = c = 435;
    printf("\ni == %d\n", i);   
    printf("u == %u\n", u);
    printf("f == %f\n", f);
    printf("c == %c\n", c);

    f = c = i = u = -10;
    printf("\nf == %f\n", f);
    printf("c == %c\n", c);
    printf("i == %d\n", i);   
    printf("u == %u\n", u);

    return 0;
}