#include <stdio.h>

// Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em real. 
// O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário, 
// para que seja apresentado o valor em moeda americana.

int main () {

    // Memo fuzue do outro programa, só que ao contrário.

    float cota, dolares, reais;

    printf("Quanto esta valendo o dolar em reais? >> \n");
    scanf("%f", &cota);

    printf("Insira o valor reais que quer converter em dolares >> \n");
    scanf("%f", &dolares);

    printf("Voce tem, em dolares: %.3f ", dolares * cota);

    return 0;


    return 0;
}