/*

25 . Reescreva o seguinte trecho de programa sem utilizar goto, continue ou break:

    int num = 0;
    char c;

    c = getchar();
    while (1){
        if (c == '\n'){
            break;
        }
        if (isdigit(c)){
            continue;
        }
        if (c == 'a'){
            goto somaNumero;
        }

        proximoCaracter:
            c = getchar();
            goto finalDoLaco;
        somaNumero:
            num++;
            goto proximoCaracter;
        finalDoLaco:
            ;
    }

*/

#include <stdio.h>
#include <ctype.h>

int main (){
    int num = 0;
    char c;

    do {
        c = getchar();

        if (c == 'a'){
            num++;
        }

        if (isdigit(c)){
            ;
        }

    } while (c != 'x');

    printf("%d", num);
}
