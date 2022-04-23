//tad_vetor.c
#include "tad_vetor.h"
#include <string.h>
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
//1
Vetor* vet_criar(){
    
    int tamanho = 10;
    int quantidade = 0;
    
    Vetor* v;
    v = (Vetor*)calloc(tamanho, sizeof(Vetor));

    v->vet = (int*)calloc(tamanho, sizeof(int));
    v->tam = tamanho;
    v->qtd = quantidade;

    return v;
};

//2
bool vet_anexar(Vetor* v, int elemento){

    v->vet[v->qtd] = elemento;
    v->qtd++;
    
    return true;
};

//3
bool vet_inserir(Vetor* v, int elemento, int posicao){
    for (int i = v->tam; i>posicao; i--){
        v->vet[i] = v->vet[i-1];
    }

    v->vet[posicao] = elemento;

    return true;
};

//4
bool vet_substituir(Vetor* v, int posicao, int novoElemento){
    v->vet[posicao] = novoElemento;
}

//5
bool vet_removerPosicao(Vetor* v, int posicao, int* endereco){
    *endereco = v->vet[posicao];
    
    for (int i = posicao; i<v->tam; i++){
        v->vet[i] = v->vet[i+1];
    }
};


//6
int vet_removerElemento(Vetor* v, int elemento){
    for (int i = 0; i<v->tam; i++){
        if (v->vet[i]=elemento){
            int elemento;
            vet_removerPosicao(v, i, &elemento);
            break;
        } else {
            printf("ELEMENTO NAO FAZ PARTE DA SEQUENCIA");
        }
    }
}


//7
int vet_tamanho(Vetor* v){
    return v->tam;
}


//8
bool vet_elemento(Vetor* v, int posicao, int* saida){
    *saida = v->vet[posicao];
}

//9
int vet_posicao(Vetor* v, int elemento){
    int index;
    for (int i = 0; i<v->tam; i++){
        if (v->vet[i] = elemento){
            index = i;
            break;
        }
    }

    return index;
}

//10
void vet_imprimir(Vetor* v){
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", v->vet[i]);
    }

    printf("\n");
};

//11
void vet_desalocar(Vetor** endVetor){
    free(endVetor);
}

//12
bool vet_toString(Vetor* v, char* saida){
    char aux;
    for (int i = 0; i<v->tam; i++){
        aux = v->vet[i] + '0';
        saida[i] = aux;
    }
}
