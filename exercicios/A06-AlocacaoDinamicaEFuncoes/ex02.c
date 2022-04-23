#include <stdio.h>

int tamanhoString1(char str[]){
    int tamanho = 0;

    do{
        tamanho++;
    } while (str[tamanho] != '\0');
    
    return tamanho;
}

void tamanhoString2(char str[], int* tamanho){
    int tam = 0;

    do{
        tam++;
    } while (str[tam] != '\0');

    *tamanho = tam;
}

int main(){
    // ENTRADA
    char string1[] = "alexandre";
    int tam1;

    char string2[] = "xandao";
    int tam2;
    
    // PROCESSAMENTO
    tam1 = tamanhoString1(string1);

    tamanhoString2(string2, &tam2);

    // SAIDA
    printf("Tamanho 1: %d\n", tam1);
    printf("Tamanho 2: %d\n", tam2);  

    return 0;
}