#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int* vetor, int tam){
    printf("[");
    for (int i=0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

int* clonarVetor1(int* vetorASerClonado, int* clone, int tamanho){
    clone = (int*) calloc(tamanho, sizeof(int));
    
    for (int i = 0; i<tamanho; i++){
        clone[i] = vetorASerClonado[i];
    }

    return clone;
}

void clonarVetor2(int* vetorASerClonado, int* clone2, int* tamanho){
    for (int i = 0; i<*tamanho; i++){
        clone2[i] = vetorASerClonado[i];
    }
}

int main(){
    // ENTRADA
    int tam = 5;
    int vetorASerClonado[5] = {1, 2, 3, 4, 5};

    int* clone1;
    int* clone2;
    clone2 = (int*) calloc(tam, sizeof(int));

    // PROCESSAMENTO
    clone1 = clonarVetor1(vetorASerClonado, clone1, tam);

    clonarVetor2(vetorASerClonado, clone2, &tam);

    // SAIDA
    imprimeVetor(clone1, tam);
    imprimeVetor(clone2, tam);

    return 0;
}