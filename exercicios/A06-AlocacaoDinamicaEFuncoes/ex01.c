#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void imprimeVetor(int* vetor, int tam){
    printf("[");
    for (int i=0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

//com return
int* criaVetorAleatorio1(int* vetor, int tamanho){
    vetor = (int*) calloc(tamanho, sizeof(int));

    for (int i=0; i<tamanho; i++){
        vetor[i] = rand() % 10;
    }

    return vetor;
}

//com metodo scanf
void criaVetorAleatorio2(int* vetor, int* tamanho){
    for (int i=0; i<*tamanho; i++){
        vetor[i] = rand() % 10;
    }
}


int main(){
    // ENTRADA
    // inicializa as variaveis que armazenarao os vetores e os enderecos na heap
    int tam1 = 5;
    int* v1;

    int tam2 = 3;
    int* v2;
    v2 = (int*) calloc(tam2, sizeof(int));
    
    // PROCESSAMENTO
    //cria vetor
    v1 = criaVetorAleatorio1(v1, tam1);

    criaVetorAleatorio2(v2, &tam2);

    // SAIDA
    imprimeVetor(v1, tam1);

    imprimeVetor(v2, tam2);

    free(v1);
    v1 = NULL;
    free(v2);
    v2 = NULL;

    return 0;
}