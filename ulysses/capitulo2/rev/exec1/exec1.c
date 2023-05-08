/*

1 . O programa a seguir é legal em C?

    int main (){
        (1 + 2) * 4;
        return 0;
    }

    O programa não é legal, pois apresenta um valor não atribuído a uma memória.
    Se utilizada a opção "-Wall" no compilador GCC, ele apresentará um aviso de valor não utilizado.

*/

int main (){
     (1 + 2) * 4;
     return 0;
 }
