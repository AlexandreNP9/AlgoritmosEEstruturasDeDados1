#include <stdio.h>
#include <string.h>

void procuraNumero(int numero, int tamanho, int vetor[tamanho]){
    int encontrou = 0; //essa variavel tem como funcao armazenar 0 para falso e 1 para verdadeiro, caso encontre o numero no vetor. Sera usada num if mais pra frente
    int index = 0;
    
    do{
        if (vetor[index] == numero){
            encontrou = 1;
            index++;
        } else {
            index++;
        }
    } while (encontrou != 1 && index < tamanho);

    if (encontrou == 1){
        printf("O número %d está inserido no vetor. \n", numero);
    } else {
        printf("O número %d NAO está inserido no vetor. \n", numero);
    }
}

void imprimeVetor(int tamanho, int vetor[tamanho]){
    printf("Vetor = ");
    for(int index = 0; index<tamanho; index++){
        int aux = vetor[index];
        printf("%d ", aux);
    }
    printf("\n");
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    int numero = 8;

    int tamanho = sizeof(vetor)/sizeof(int);

    procuraNumero(numero, tamanho, vetor);
    imprimeVetor(tamanho, vetor);
    return 0;
}