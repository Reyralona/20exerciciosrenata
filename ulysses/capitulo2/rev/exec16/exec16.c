/*

16 . O programa do exercício anterior depende muito do bom comportamento do usuário.
    a) Critique este programa à luz daquilo que foi discutido na Seção 2.6.
    b) Re-implemente este programa de modo que ele seja compatível com os ensinamentos encontrados na mesma seção.

    a) O programa não checa nenhuma vez se o usuário forneceu um número não inteiro, e também não checa
    se o usuário insere um valor errado múltiplas vezes.

    b) 

*/

#include <stdio.h>

void LimpaBuffer(void){
    int valorLido;
    do {
        valorLido = getchar();
    } while ((valorLido != '\n') && (valorLido != EOF));
}

int EsperaResposta(int valor){
    int n = 0;
    n = scanf("%d", &valor);
    while(n == 0){
        LimpaBuffer();
        printf("Insira um numero inteiro: ");
        n = scanf("%d", &valor);
    }

    return valor;
}

int main(){
        int dividaInicial = 0, pago = 0, debito = 0;

        printf("Divida inicial: ");
        dividaInicial = EsperaResposta(dividaInicial);

        printf("Quanto voce pagou? ");
        pago = EsperaResposta(pago);
        
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