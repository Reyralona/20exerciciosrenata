/*

15 . Por que o programa a seguir imprime sempre a mesma mensagem: "Voce tem credito de 0?"

    int main(){
        int dividaInicial, pago, debito;

        printf("Divida inicial: ");
        scanf("%d", &dividaInicial);

        printf("Quanto voce pagou?: ");
        scanf("%d", &pago);

        debito = pago - dividaInicial;

        if (debito = 0){
            printf("Voce nao deve nada\n");
        }
        else if (debito < 0){
            printf("Voce deve %d\\n", -debito);
        }
        else {
            printf("Voce tem credito de %d\n", debito);
        }
        return 0;
    }

    O erro do programa se encontra na linha 12, onde o programador acidentalmente usa o operador de atribuição
    onde desejaria usar um de comparação. Isso faz com que o valor de débito sempre seja 0 e que o escopo do 
    primeiro if não seja avaliado verdadeiro. No else if, debito nunca será menor do que 0. Isso nos leva 
    ao else, onde o valor do debito é printado, e sempre será printado 0.

    Segue abaixo a implementação correta deste programa:
*/

#include <stdio.h>

int main(){
        int dividaInicial, pago, debito;

        printf("Divida inicial: ");
        scanf("%d", &dividaInicial);

        printf("Quanto voce pagou?: ");
        scanf("%d", &pago);

        debito = pago - dividaInicial;

        if (debito == 0){
            printf("Voce nao deve nada\n");
        }
        else if (debito < 0){
            printf("Voce deve %d\n", -debito);
        }
        else {
            printf("Voce tem credito de %d\n", debito);
        }
        return 0;
    }