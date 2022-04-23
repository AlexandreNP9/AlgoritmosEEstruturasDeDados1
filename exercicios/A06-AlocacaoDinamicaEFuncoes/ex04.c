#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeVetor(int* vetor, int tam){
    printf("[");
    for (int i=0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

bool dobrar (int* v, int tamAntigo, int* novoVetor, int novoTam){
    int i = 0;
    
    for (int i = 0; i<tamAntigo; i++){
        novoVetor[i] = v[i];
    }

    free(v);
    v = novoVetor;

}

int main(){
    // ENTRADA
    int tamanho = 5;
    int* vetor;
    vetor = (int*) calloc(tamanho, sizeof(int));
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    // PROCESSAMENTO
    int novoTamanho = 10;
    int* novoVetor;
    novoVetor = (int*) calloc(novoTamanho, sizeof(int));

    dobrar(vetor, tamanho, novoVetor, novoTamanho);
    vetor = novoVetor;

    // SAIDA
    imprimeVetor(vetor, novoTamanho);
    
    return 0;
}
