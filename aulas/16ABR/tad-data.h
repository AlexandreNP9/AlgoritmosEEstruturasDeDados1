#ifndef TAD_DATA_H
#define TAD_DATA_H

#include "tad-data.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/****************************
 * DADOS
****************************/
typedef struct data Data;


/****************************
 * PROTÓTIPOS
****************************/

Data* data_criar(int dia, int mes, int ano);
void data_desalocar(Data** d);
void data_imprimir(Data* d);
//bool validarData(Data* d)

#endif