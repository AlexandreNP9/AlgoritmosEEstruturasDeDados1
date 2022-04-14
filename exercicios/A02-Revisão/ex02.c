#include <stdio.h>

int somaNumerosNoVetor (int tamanho, int vetor[tamanho]){
    int soma = 0;
    for (int index = 0; index<tamanho; index++){
        soma += vetor[index];
    }

    return soma;
}

int main(){
    int vetor[] = {0, 1, 2, 3, 4, 5, 6, 100};

    int tamanho = sizeof(vetor)/sizeof(int);
    int resp = somaNumerosNoVetor(tamanho, vetor);
    printf("Soma: %d\n", resp);
    
    return 0;
}