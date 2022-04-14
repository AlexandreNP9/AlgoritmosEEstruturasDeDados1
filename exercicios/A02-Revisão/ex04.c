#include <stdio.h>
#include <string.h>

void extaiFaixaVetor(int posicaoInicial, int posicaoFinal, char string[]){
    int tamanhoStringOriginal = strlen(string);

    //cria vetor 'resposta' com o tamanho desejado e o indice 
    int tamanhoResposta = posicaoFinal - posicaoInicial + 1;
    char resposta[tamanhoResposta];
    int indiceResposta = 0;

    //preenche o vetor resposta com o intervalo desejado
    for (int index=0; index<tamanhoStringOriginal; index++){
        if(index>=posicaoInicial && index<=posicaoFinal){
            resposta[indiceResposta] = string[index];
            indiceResposta++;
        }
    }

    //imprime o vetor
    for (int aux = 0; aux<tamanhoResposta; aux++){
        printf("%c", resposta[aux]);
    }
    printf("\n");
}

int main(){
    char string[] = "Bananinha frita";
    int posicaoInicial = 1;
    int posicaoFinal = 5;
    extaiFaixaVetor(posicaoInicial, posicaoFinal, string);

    return 0;
}