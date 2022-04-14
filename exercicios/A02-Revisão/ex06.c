#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int ra;
    float notas[3];
};

void encontraMaiorNotaP1(struct alunos, int n){

    printf("--------------------\n");
}

void alunoMaiorMedia(struct alunos, int n){

    printf("--------------------\n");
}

void alunoMenorMedia(struct alunos, int n){

    printf("--------------------\n");
}

void situacao(struct alunos, int n){

    printf("--------------------\n");
}

int main(){
    //ENTRADA
    struct Aluno alunos[100];
    int n;
    n = leArquivo ("ex06.txt", alunos);
    int quantosAlunos = 5;

    //PROCESSAMENTO
    struct aluno alunoMaiorNota = encontraMaiorNotaP1(alunos, quantosAlunos, 2);
    struct aluno alunoMaiorMedia = encontraMaiorMedia(alunos, quantosAlunos);
    struct aluno alunoMenorMedia = encontraMenorMedia(alunos, quantosAlunos);
    
    //SAÍDA
    printf("Aluno com a maior nota da P1: \n");
    
    return 0;
}