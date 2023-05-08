/*

4. (a) Mostre que a representação em formato decimal de cada constante em formato hexadecimal da
   primeira coluna da Tabela 6 (Seção 1.2.3) corresponde àquela apresentada na segunda coluna desta tabela.

   (b) Mostre que a representação em formato hexadecimal de cada constante em formato decimal na
   segunda coluna da Tabela 6 (Seção 1.2.3) corresponde àquela apresentada na primeira coluna desta tabela.

    _________________________________________
    |                     |                 |
    | FORMATO HEXADECIMAL | FORMATO DECIMAL |  
    |_____________________|_________________|
    |        0x1P2        |       4.0       |
    |      0X56.46P-3     |    10.784180    |
    |    -0x5.3456P7f     |  -666.167969f   |
    |_____________________|_________________|

*/

#include <stdio.h>

void main () {

    // a)
  
    printf("\n%f\n%f\n%f\n", 0x1P2, 0x56.46P-3, -0x5.3456P7f);

    // b)

    if ("%a" == "%f", 4.0, 0x1P2){
        printf("\n%a is equal to %f", 4.0, 0x1P2);
    }
    if ("%a" == "%f", 10.784180, 0x56.46P-3){
        printf("\n%a is equal to %f", 10.784180, 0x56.46P-3);
    }
    if ("%a" == "%f", -666.167969f, -0x5.3456P7f){
        printf("\n%a is equal to %f", -666.167969f, 0x5.3456P7f);
    };
}