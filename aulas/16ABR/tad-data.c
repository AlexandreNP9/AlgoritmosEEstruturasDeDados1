#include "tad-data.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/****************************
 * DEFINIÇÃO DOS DADOS
****************************/

struct data{
    int dia;
    int mes;
    int ano;
};

/****************************
 * IMPLEMENTAÇÃO
****************************/
Data* data_criar(int dia, int mes, int ano){
    Data* d = (Data*)malloc(sizeof(Data));

    (*d).dia = dia;
    d->mes = mes;
    d->ano = ano;

    return d;
}

void data_desalocar(Data** endereco){
    Data* d = *endereco;
    free(d);
    *endereco = NULL;
}

void data_imprimir(Data* d){
    printf("%02d/%02d/%02d\n", d->dia, d->mes, d->ano);
}

bool validarData(Data* d){
    
    
    return true;
}