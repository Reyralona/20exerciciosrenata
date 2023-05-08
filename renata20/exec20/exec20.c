#include <stdio.h>

// Desenvolver um programa que efetua a leitura dos nomes de 5 alunos e também de suas duas notas semestrais. 
// Ao final deverá ser apresentado o nome de cada aluno classificado em ordem numérica crescente de suas médias anuais. (MANZANO, p. 101) 


// Se você chegou até aqui, esse eu não vou explicar tão detalhadamente.


// Struct é uma estrutura de dados que leva consigo diferentes atributos. Semelhante a uma classe, mas não é uma.
struct aluno {
    char nome[20];
    int  notas[2];
    int  media;
}; // < -- Tem que lembrar desse cara aqui.

int main () {

    // Define um vetor de tamanho 5, do tipo struct aluno. Ou seja, existem 5 struct alunos dentro desse vetor.
    struct aluno alunos[5], temp;

    //registra alunos e notas
    for (int i = 0; i < 5; i ++){
        printf("Insira o nome do aluno numero %d >> \n" , i + 1);
        // Escaneia o valor e o atribui ao atributo nome do aluno no índice i.
        scanf("%s", alunos[i].nome);

        printf("Insira as notas de %s >> \n" , alunos[i].nome);
        // Faz o mesmo para as notas, que são duas.
        scanf("%d%d", &alunos[i].notas[0], &alunos[i].notas[1]);
        
        // Calcula a média nota1 + nota2 e atribui ao atributo média do aluno no índice i.
        alunos[i].media = alunos[i].notas[0] + alunos[i].notas[1];
        printf("\n");
    }

    // Compara cada aluno com ele mesmo e seus respectivos para 
    // poder trocar de posição no vetor caso a média seja menor, note o uso do truque da variável temporária.
    //
    // Este algoritmo de ordenação se chama BubbleSort, e é um dos piores. 
    // Só implementei por questão de simplicidade.
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (alunos[i].media < alunos[j].media){
                temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    // Retorna o nome do aluno e sua média em ordem crescente.
    for (int i = 0; i < 5; i++){
        printf("%s tirou %d\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}

//#BELEZINHA?