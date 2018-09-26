#include <stdlib.h>
#include <stdio.h>
#include "liste.h"
#include "elements/e_nb.h"

int main(int argc, char** argv){
  Liste l = liste_new();
  int i;
  double *p;
  for (i = 0; i < 5; i++) {
    p = (double*)malloc(sizeof(double));
    *p = i;
    l = ajout_queue(p, l);
  }
  inversion_liste(&l);
  liste_print(nb_print, l);
  liste_del(nb_del, l);
  return 0;
}
