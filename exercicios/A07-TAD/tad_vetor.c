//tad_vetor.c
#include "tad_vetor.h"


/********************************************
 * Especificação dos dados
 *******************************************/
struct vetor{
    int* vet;
    int tam;
    int qtd;
};

/********************************************
 * Implementação das funções
 *******************************************/
Vetor* vet_criar(){
    int vetor[10];
    int tamanho = 10;
    int quantidade = 1;
    
    
    Vetor* v;
    v = (Vetor*)malloc(sizeof(Vetor));

    v->vet = vetor;
    v->tam = tamanho;
    v->qtd = quantidade;

    return v;
};

bool vet_anexar(Vetor* v, int elemento){
    bool resp = false;

    for (int i = 0; i<sizeof(v->vet); i++){
        //primeiro elemento
        if (v->vet[0] == NULL){
            (v->vet)[0] = elemento;
            resp = true;
            break;
        }
        
        //elementos no meio
        else if (v->vet[i-1] == NULL){
            (v->vet)[i] = elemento;
            resp = true;
            break;
        }
    }
    
    return resp;
};

/*
bool vet_inserir(Vetor* v, int elemento, int posicao);
bool vet_substituir(Vetor* v, int posicao, int novoElemento);
bool vet_removerPosicao(Vetor* v, int posicao, int* endereco);
int vet_removerElemento(Vetor* v, int elemento);
int vet_tamanho(Vetor* v);
bool vet_elemento(Vetor* v, int posicao, int* saida);
int vet_posicao(Vetor* v, int elemento);
void vet_imprimir(Vetor* v);
void vet_desalocar(Vetor** endVetor);
bool vet_toString(Vetor* v, char* saida);
*/