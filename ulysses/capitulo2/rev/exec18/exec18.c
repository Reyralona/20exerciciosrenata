/*

18 . O programa a seguir foi criado com o objetivo de construir uma tabela de conversão entre graus
    centígrados e Fahrenheit para os 100 primeiros valores de graus centígrados:

    int main(){
        int cent;

        printf("Centigrados\t\tFahrenheit\n");
        for(cent = 0; cent <= 100; cent++);
            printf("%d\t\t\t%d\n", cent, (9*cent)/5 + 32);
        

        return 0;
    }


    No entanto, o programa consegue imprimir apenas:
    
    Centigrados         Fahrenheit
    101                 213

    Explique porque o programa não funciona conforme deveria e apresente uma maneira de corrigi-lo.

    O programa não funcionará da forma correta pois o loop for está sendo usado da maneira incorreta.
    O loop for deve possuir um escopo no qual o código dentro dele será executado n vezes. No caso do exemplo, não
    existe nenhuma abertura ou fechamento de escopo além da função principal. Portanto, apenas a última iteração
    do código será apresentada na tela.

    Segue abaixo a implementação correta do programa:

*/

#include <stdio.h>

int main(){
        int cent;

        printf("Centigrados\t\tFahrenheit\n");
        for(cent = 0; cent <= 100; ++cent){
            printf("%d\t\t\t%d\n", cent, (9*cent)/5 + 32);
        }
        
        return 0;
    }