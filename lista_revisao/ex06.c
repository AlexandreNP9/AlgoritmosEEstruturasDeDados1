#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int ra;
    float notas[3];
};

void alunoMaiorNotaP1(struct alunos, int n){

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
    int n = 5; //numnero de alunos que eu quero que sejam lidos

    FILE *entrada = fopen("ex06_entrada.txt", "r");
    for (int i=0; i < n; i++){
        fscanf(entrada, "%d", &alunos[i].ra);
        fscanf(entrada, "%f", &alunos[i].notas[i]);
        fscanf(entrada, "%f", &alunos[i].notas[i+1]);
        fscanf(entrada, "%f", &alunos[i].notas[i+2]);
    }
    fclose(entrada);


    //teste se o struct ou o file estão funcionando
    printf("%d", &alunos[0].ra);
    printf("%.1f", &alunos[0].notas[0]);
    printf("%.1f", &alunos[0].notas[1]);
    printf("%.1f", &alunos[0].notas[2]);

    //PROCESSAMENTO
    alunoMaiorNotaP1(alunos, n);
    alunoMaiorMedia(alunos, n);
    alunoMenorMedia(alunos, n);
    situacao(alunos, n);


    //SAÍDA
    return 0;
}