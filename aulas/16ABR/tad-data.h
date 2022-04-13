#include <stdio.h>
#include <stdlib.h>

/****************************
 * DADOS
****************************/


typedef struct {
    int dia;
    int mes;
    int ano;
}Data;


/****************************
 * PROTÓTIPOS
****************************/

Data* data_criar(int dia, int mes, int ano);
void data_desalocar(Data** d);
void data_imprimir(Data* d);
