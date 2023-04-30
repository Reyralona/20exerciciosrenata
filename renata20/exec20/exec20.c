#include <stdio.h>

// Desenvolver um programa que efetua a leitura dos nomes de 5 alunos e também de suas duas notas semestrais. 
// Ao final deverá ser apresentado o nome de cada aluno classificado em ordem numérica crescente de suas médias anuais. (MANZANO, p. 101) 

struct aluno {
    char nome[20];
    int notas[2];
    int media;
};

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main () {

    struct aluno alunos[5];
    int medias[5];

    //registra alunos e notas
    for (int i = 0; i < 5; i ++){
        printf("Insira o nome do aluno numero %d >> \n" , i + 1);
        scanf("%s", &alunos[i].nome);
        printf("Insira as notas de %s >> \n" , alunos[i].nome);
        scanf("%d%d", &alunos[i].notas[0], &alunos[i].notas[1]);
        printf("\n");
    }

    //calcula as médias e armazena num vetor
    for (int i = 0; i < 5; i ++){
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1]);
        medias[i] = alunos[i].media;
    }

    //ordena o vetor
    bubbleSort(medias, 5);

    //retorna os alunos ordenados pelas médias
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j++){
            if (alunos[j].media == medias[i]){
                printf("O aluno %s tem media >> %d\n", alunos[j].nome, medias[i]);
            }
        }
    }
    
    return 0;
}