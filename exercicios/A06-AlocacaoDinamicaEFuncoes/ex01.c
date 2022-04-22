#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/*
//com calloc
int* criaVetor1(int tam){
    int* v = (int*)calloc(tam, sizeof(int));
    for (int i=0; i < tam; i++){
        v[i] = rand();
    }

    return v;
}

//com malloc
void criaVetor2(int tam, int* endereco){
    for (int i=0; i < tam; i++){
        endereco[i] = rand();
    }
}

void imprimeVetor(int* vetor, int tam){
    printf("[");
    for (int i=0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}
*/





int main(){
    // ENTRADA
    // inicializa as variaveis que armazenarao os vetores
    int tam1 = 5;
    int* v1;

    int tam2 = 3;
    int* v2;
    
    // PROCESSAMENTO
    v1 = criaVetorAleatorio1(tam1, v1);

    v2 = criaVetorAleatorio1(tam2, v2);

    // SAIDA
    v1 = criaVetor1(5);
    imprimeVetor(v1, 5);

    v2 = (int*) malloc (5 * sizeof(int));
    criaVetor2(5, v2);
    imprimeVetor(v2, 5);


    return 0;
}