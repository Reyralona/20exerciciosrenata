/*

11 . Por que nem sempre a função getchar() interrompe a execução do programa e espera
    que o usuário digite um caractere?

    A função getchar() lê o buffer padrão em busca de caracteres. Quando o buffer está vazio, a função
    interrompe o programa na espera do usuário inserir um caractere. Porém, para inserir algum, o usuário deve
    terminar a operação com "enter", que guarda no buffer um caractere de término ('\n'). Se a função getchar()
    for utilziada novamente sem o buffer ter sido limpo, ela lerá o valor de quebra de linha sem pedir
    nenhum input do usuário e terminará o programa.

*/