#include <stdio.h>

// Desenvolver um programa que efetua a leitura dos nomes de 5 alunos e também de suas duas notas semestrais. 
// Ao final deverá ser apresentado o nome de cada aluno classificado em ordem numérica crescente de suas médias anuais. (MANZANO, p. 101) 

struct aluno {
    char nome[20];
    int  notas[2];
    int  media;
};

int main () {

    struct aluno alunos[5], temp;

    //registra alunos e notas
    for (int i = 0; i < 5; i ++){
        printf("Insira o nome do aluno numero %d >> \n" , i + 1);
        scanf("%s", alunos[i].nome);

        printf("Insira as notas de %s >> \n" , alunos[i].nome);
        scanf("%d%d", &alunos[i].notas[0], &alunos[i].notas[1]);
        
        alunos[i].media = alunos[i].notas[0] + alunos[i].notas[1];
        printf("\n");
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (alunos[i].media < alunos[j].media){
                temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("%s tirou %d\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}