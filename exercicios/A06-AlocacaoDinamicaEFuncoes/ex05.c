#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    unsigned int codigo;
    char nome[50];
    float preco;
}Produto;

void criaProduto(Produto* prod, int code, char *name, float price){
    prod->codigo = code;
    strcpy(prod->nome, name);
    prod->preco = price;
}

void imprimeProduto(Produto* prod){
    printf("%d \n", prod->codigo);
    printf("%s \n", prod->nome);
    printf("%.2f \n", prod->preco);
}

int main(){
    // ENTRADA
    int cod = 1;
    char nome[] = "produtinho";
    float preco = 50.55;

    Produto* prod;
    prod = (Produto*) malloc(sizeof(Produto));

    // PROCESSAMENTO
    criaProduto(prod, cod, nome, preco);

    // SAIDA
    imprimeProduto(prod);

    return 0;
}