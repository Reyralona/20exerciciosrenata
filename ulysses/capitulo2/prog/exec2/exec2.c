/*

2 . a) Escreva um programa em C que utilize o operador sizeof em conjunto com a função prinf()
    para determinare imprimir o número de bytes ocupados por valores dos seguintes tipos primitivos de C:
    i)   int
    ii)  short
    iii) long
    iv)  long long
    v)   float
    vi)  double
    vii) long double

    A saída deste programa deve ser algo como: "o tipo short ocupa 4 bytes."

    b) Sabendo o número de bytes ocupado pelos tipos short, int, long e long long, determine analiticamente
    o intervalo de possíveis valores dos tipos:
    i)   short                        ---> -32,768    até 32,767;
    ii)  unsigned short               --->  0         até 65,535 (32,768 + 32,767);
    iii) int                          ---> -2^(4*8)-1 até 2^(4*8);
    iv)  unsigned int                 ---> (2^(4*8))^2;
    v)   long int                     ---> -2^(8*8)-1 até 2^(8*8); 
    vi)  unsigned long                ---> (2^(8*8))^2;
    vii) unsigned long long           ---> (2^(10*8))^2;

    c) Você poderia repetir a tarefa solicitada no item anterior para os tipos de ponto-flutuante? Explique
    que conhecimentos adicionais você precisaria ter, além do conhecimento básico sobre aritmética binária para 
    efetuar essa tarefa.

    Para medir o intervalo entre os tipos de ponto flutuante, precisamos representá-los da forma hexadecimal
    proposta pelo padrão ISOC99. Os tipos serão salvos como potências de 2 sobre um expoente e com complemento de 2.

*/

#include<stdio.h>

int main (){

    int i;
    short ii;
    long iii;
    long long iv;
    float v;
    double vi;
    long double vii;

    printf("\nO tipo int ocupa %d bytes", sizeof(i));
    printf("\nO tipo short ocupa %d bytes", sizeof(ii));
    printf("\nO tipo long ocupa %d bytes", sizeof(iii));
    printf("\nO tipo long long ocupa %d bytes", sizeof(iv));
    printf("\nO tipo float ocupa %d bytes", sizeof(v));
    printf("\nO tipo double ocupa %d bytes", sizeof(vi));
    printf("\nO tipo long double ocupa %d bytes", sizeof(vii));

    return 0;
}