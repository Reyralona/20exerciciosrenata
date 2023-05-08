/*

2 . Ambos os trechos de programa a seguir contêm erros:
    _________________             _________________
    |               |             |               |
    | int x = 0;    |             |  int x = 0;   |
    | if (x = 10){  |             |  if (10 = x){ |
    |     y += 1;   |             |      y += 1;  |
    | }             |             |  }            |
    |_______________|             |_______________|

    Por que o compilador indica uma ocorrência de erro no trecho de programa 2, mas o mesmo não acontece
    com o trecho de programa 1?

        Em ambos os casos, o intuito do programador é comparar x ao valor de 10.
    No primeiro caso, o uso do operador de atribuição de uma variável para um valor não gera um erro, pois
    passa 10 para o valor de x.
        Porém, no segundo caso, o compilador indica erro pois não existe maneira de 10 ser atribuído ao valor de x.
    É uma boa prática sempre usar o valor real primeiro do que uma variável numa comparação, para que no caso do 
    esquecimento do uso do operador de comparação de forma correta, o compilador gerará um erro.

*/