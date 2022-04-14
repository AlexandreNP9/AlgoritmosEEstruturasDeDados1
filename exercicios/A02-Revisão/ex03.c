#include <stdio.h>
#include <string.h>

int contaVogais(char string[]){
    int tamanho = strlen(string);
    int contaVogais = 0;
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int index = 0;

    do{
    
        for (int posicaoNoVetorVogais = 0; posicaoNoVetorVogais<10; posicaoNoVetorVogais++){
            if (string[index] == vogais[posicaoNoVetorVogais]){
                contaVogais++;
            }
        }

        index++;    
    } while (index<tamanho);

    return contaVogais;
}

int main(){
    char string[] = "Alexandre Nassar de Peder";
    int resp = contaVogais(string);
    printf("Vogais: %d\n", resp);
    
    return 0;
}