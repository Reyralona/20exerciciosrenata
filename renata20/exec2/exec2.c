#include <stdio.h>

//Elaborar um programa que calcule e apresente o volume de uma caixa 
//retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA. (MANZANO, p. 26)

int main(){

    // define quatro variáveis do tipo REAL.
    float comp, larg, alt, vol;

    printf("Formula do volume = Comprimento * Largura * Altura.\n");

    // escaneia o valor do comprimento e atribui a sua variável.
    printf("Insira o comprimento da caixa em M >> \n");
    scanf("%f", &comp);

    // escaneia o valor da largura e atribui a sua variável.
    printf("Insira a largura da caixa em M >> \n");
    scanf("%f", &larg);

    // escaneia o valor da altura e atribui a sua variável.
    printf("Insira a altura da caixa em M >> \n");
    scanf("%f", &alt);

    printf("O volume da caixa e de: ");

    // efetua o calculo comprimento * largura * altura e salva o resultado na variável chamada vol (volume).
    vol = comp * larg * alt;

    // printa o resultado. Como vol é do tipo real, usamos "%f". ("%.2f" nesse caso para imprimir apenas duas casas decimais)
    printf("%.2f metros cubicos.", vol);


    return 0;
}
