#include <stdio.h>

//Elaborar um programa que calcule e apresente o volume de uma caixa 
//retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA. (MANZANO, p. 26)

int main(){

    float comp, larg, alt, vol;

    printf("Formula do volume = Comprimento * Largura * Altura.\n");
    printf("Insira o comprimento da caixa em M >> \n");
    scanf("%f", &comp);

    printf("Insira a largura da caixa em M >> \n");
    scanf("%f", &larg);

    printf("Insira a altura da caixa em M >> \n");
    scanf("%f", &alt);

    printf("O volume da caixa e de: ");
    vol = comp * larg * alt;
    printf("%.2f metros cubicos.", vol);


    return 0;
}
