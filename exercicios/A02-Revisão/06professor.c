#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct aluno{
	int ra;
	float notas[3];
};

void imprimeAluno(struct aluno a){
    printf("[RA]     %d\n", a.ra);
    printf("[nota 0] %.1f\n", a.notas[0]);
    printf("[nota 1] %.1f\n", a.notas[1]);
    printf("[nota 2] %.1f\n\n", a.notas[2]);
}

struct aluno encontraMaiorNota(struct aluno vet[], int qtde, int prova){
    float maiorNota = vet[0].notas[prova];
    int posAluno = 1;

    for (int i=1; i < qtde; i++){
        if(vet[i].notas[prova] > maiorNota){
            maiorNota = vet[i].notas[prova];
            posAluno = i;
        }
    }
    return vet[posAluno];
}

float calculaMedia(struct aluno a){
    return (a.notas[0]+a.notas[1]+a.notas[2])/3;
}

struct aluno encontraMaiorMedia(struct aluno vet[], int qtde){
    float maiorMedia = calculaMedia(vet[0]);
    int posAluno = 0;

    for (int i=1; i < qtde; i++){
        float mediaAtual = calculaMedia(vet[i]);
        if(mediaAtual > maiorMedia){
            maiorMedia = mediaAtual;
            posAluno = i;
        }
    }
    return vet[posAluno];
}

struct aluno encontraMenorMedia(struct aluno vet[], int qtde){
    float menorMedia = calculaMedia(vet[0]);
    int posAluno = 0;

    for (int i=1; i < qtde; i++){
        float mediaAtual = calculaMedia(vet[i]);
        if(mediaAtual < menorMedia){
            menorMedia = mediaAtual;
            posAluno = i;
        }
    }
    return vet[posAluno];
}

void imprimeListaAprovacao(struct aluno vet[], int qtde){
    printf("RELATORIO\n");
    printf("----------------------\n");
    for (int i=0; i < qtde; i++){
        bool aprovado = calculaMedia(vet[i]) >= 7.0;
        printf("RA %d [%s]\n", vet[i].ra, (aprovado ? "APROVADO":"REPROVADO"));
    }

}

int leArquivo(char nomeArquivo[], struct aluno vet[]){
    int qtde;
    FILE *arqEntrada = fopen("ex06.in", "r");
    fscanf(arqEntrada, "%d", &qtde);
    for (int i=0; i < qtde; i++){
        fscanf(arqEntrada, "%d", &vet[i].ra); 
        fscanf(arqEntrada, "%f", &vet[i].notas[0]);
        fscanf(arqEntrada, "%f", &vet[i].notas[1]);
        fscanf(arqEntrada, "%f", &vet[i].notas[2]);
    }
    fclose(arqEntrada);
    return qtde;
}


int main(){
    // ENTRADA
    struct aluno alunos[100];
    int n;
    n = leArquivo("ex06_entrada.in", alunos);

    int quantosAlunos = 5; //mudar esse codigo depois pra pegar o primeiro int do txt
    int provaNumeroTal = 2;

    
    // PROCESSAMENTO
    struct aluno alunoMaiorNota = encontraMaiorNota(alunos, quantosAlunos, provaNumeroTal);
    struct aluno alunoMaiorMedia = encontraMaiorMedia(alunos, quantosAlunos);
    struct aluno alunoMenorMedia = encontraMenorMedia(alunos, 5);
    

    // SAIDA
    printf("Aluno com a maior nota da primeira prova\n");
    imprimeAluno(alunoMaiorNota);

    printf("Aluno com a maior media\n");
    imprimeAluno(alunoMaiorMedia);

    printf("Aluno com a menor media\n");
    imprimeAluno(alunoMenorMedia);

    imprimeListaAprovacao(alunos, 5);
    return 0;
}