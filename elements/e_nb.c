#include "e_nb.h"
#include <stdlib.h>
#include <stdio.h>

int nb_del(void* a){
    free(a);
    return 0;
}
int nb_print(void* a_ambigu){
    double* a = (double*)a_ambigu;  // a est bien un nb, l'ambiguité du void* est levée
    return printf("%lf\n", *a);
}
