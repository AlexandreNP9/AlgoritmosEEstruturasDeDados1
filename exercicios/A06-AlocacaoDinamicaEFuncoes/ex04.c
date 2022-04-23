#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeVetor(int* vetor, int tam){
    //imprimir o vetor bonitinho
    printf("[");
    for (int i = 0; i<tam-1; i++){
        printf("%d, ", vetor[i]);
    }
    printf("%d", vetor[tam-1]);
    printf("]\n");

}

bool dobrar (int* v, int* novoV, int tam){
    for (int i = 0; i<tam; i++){
        novoV[i] = v[i];
    }

    free(v);
    v = novoV;

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
    int* novoV;
    novoV = (int*) calloc(2*tamanho, sizeof(int));
    dobrar(vetor, novoV, tamanho);
    vetor = novoV;
    
    // SAIDA
    imprimeVetor(vetor, tamanho);
    
    return 0;
}