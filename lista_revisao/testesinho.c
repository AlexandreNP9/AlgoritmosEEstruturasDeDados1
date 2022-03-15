#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int ra;
    float notas[3];
};

void imprimeAluno (struct alunos a){
    printf("[RA] %d\n", a.ra);
    printf("[Nota 0] %f\n", a.notas[0]);
    printf("[Nota 1] %f\n", a.notas[1]);
    printf("[Nota 2] %f\n", a.notas[2]);
}

int main(){
    //ENTRADA
    struct Aluno alunos[100];
    int n = 5;
    FILE *entrada = fopen("ex06_entrada.txt", "r");
    for (int i=1; i <= n; i++){
        fscanf(entrada, "%d", &alunos[i].ra);
        fscanf(entrada, "%.1f", &alunos[i].notas[i]);
        fscanf(entrada, "%.1f", &alunos[i].notas[i+1]);
        fscanf(entrada, "%.1f", &alunos[i].notas[i+2]);
    }
    fclose(entrada);

    imprimeAluno(alunos[0]);
    imprimeAluno(alunos[1]);
    imprimeAluno(alunos[2]);
    imprimeAluno(alunos[3]);
    imprimeAluno(alunos[4]);


    //PROCESSAMENTO

    //SAÍDA
    return 0;
}