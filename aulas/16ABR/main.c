#include <stdlib.h>
#include <stdio.h>
#include "tad-data.h"

int main(){
    
    Data* d1 = data_criar(13, 4, 2022);
    Data* d2 = data_criar(1, 1, 2021);

    data_imprimir(d1);
    data_imprimir(d2);

    data_desalocar(&d1);
    data_desalocar(&d2);

    return 0;
}