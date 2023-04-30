#include <stdio.h>

//Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. 
//O programa deve solicitar o valor da cotação do dólar e 
//também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira. (MANZANO, p. 26)

int main(){
    float cota, dolares, reais;

    printf("Quanto esta valendo o dolar em reais? >> \n");
    scanf("%f", &cota);

    printf("Insira o valor dolares que quer converter em reais >> \n");
    scanf("%f", &dolares);

    printf("Voce tem, em reais: %.3f ", dolares * cota);

    return 0;
}