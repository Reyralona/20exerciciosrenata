/*

13 . Por que o programa a seguir não imprime o resultado esperado?

    int main(){
        int resultado = 2 + 2;
        printf("O resultado e: %d\n");
        return 0;
    }

    O programa não irá imprimir o resultado esperado pois a função printf está sendo usada da forma incorreta.
    Para imprimir uma variável pela função printf, primeiro o programador deve especificar o tipo da variável numa
    string, e os próximos argumentos da função são as variáveis em si. Nesse caso, não há nenhum argumento que alimente
    variáveis à função. A utilização correta nesse programa seria:

    printf("O resultado e: %d\n", resultado);

*/