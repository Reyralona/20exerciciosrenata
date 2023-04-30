#include <stdio.h>

//Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. 
//O programa deve solicitar o valor da cotação do dólar e 
//também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira. (MANZANO, p. 26)

int main(){

    // define três variáveis do tipo real
    float cota, dolares, reais;

    printf("Quanto esta valendo o dolar em reais? >> \n");

    // escaneia o valor da cota de dolares -> reais
    // ex: 1 dolar = 5.04 reais, logo a cota é 5.04.
    scanf("%f", &cota);

    printf("Insira o valor dolares que quer converter em reais >> \n");

    // escaneia o valor em dólares que deseja ser convertido.
    scanf("%f", &dolares);

    // retorna o cálculo dolares * cota como um número real de três casas decimais
    printf("Voce tem, em reais: %.3f ", dolares * cota);

    return 0;
}