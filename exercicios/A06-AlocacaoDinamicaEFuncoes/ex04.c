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
    novoVetor = (int*) calloc(novoTam, sizeof(int));
    
    int i = 0;
    
    for (int i = 0; i<tamAntigo; i++){
        novoVetor[i] = v[i];
    }

    free(v);
    v = novoVetor;
}

int main(){
    int tamanho = 5;
    int* vetor;
    vetor = (int*) calloc(tamanho, sizeof(int));
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    imprimeVetor(vetor, tamanho);

    int novoTamanho = 10;
    int* novoVetor;
    dobrar(vetor, tamanho, novoVetor, novoTamanho);

    imprimeVetor(vetor, novoTamanho);
    
    return 0;
}
