//tad_vetor.c
#include "tad_vetor.h"
#include <stdio.h>


/********************************************
 * Especificação dos dados
 *******************************************/
struct vetor{
    int* vet;
    int tam;
    int qtd; //qtd de posicoes preenchidas
};

/********************************************
 * Implementação das funções
 *******************************************/
Vetor* vet_criar(){
    
    int tamanho = 10;
    int quantidade = 0;
    
    Vetor* v;
    v = (Vetor*)malloc(sizeof(Vetor));

    v->vet = (int*)calloc(tamanho, sizeof(int));
    v->tam = tamanho;
    v->qtd = quantidade;

    //printf("deu certo, parabens\n");

    return v;
};

bool vet_anexar(Vetor* v, int elemento){
    if (v->qtd = v->tam){
        v->tam *= 2;
    } else {
        v->vet[v->qtd] = elemento;
        v->qtd++;
    }
    
    return true;
};


bool vet_inserir(Vetor* v, int elemento, int posicao){
    
};

/*
bool vet_substituir(Vetor* v, int posicao, int novoElemento);
bool vet_removerPosicao(Vetor* v, int posicao, int* endereco);
int vet_removerElemento(Vetor* v, int elemento);
int vet_tamanho(Vetor* v);
bool vet_elemento(Vetor* v, int posicao, int* saida);
int vet_posicao(Vetor* v, int elemento);
*/

void vet_imprimir(Vetor* v){

    for (int i = 0; i < v->qtd; i++)
    {
        printf("%d,", v->vet[i]);
    }

    printf("\n");
};

/*
void vet_desalocar(Vetor** endVetor);
bool vet_toString(Vetor* v, char* saida);
*/