#include <assert.h>
#include <stdio.h>
#include "liste.h"
int main(){ Liste l; liste_init(&l); liste_inserer_tete(&l,5); liste_inserer_tete(&l,1); liste_inserer_queue(&l,3); liste_afficher(&l); liste_inverser(&l); liste_afficher(&l); liste_detruire(&l); printf("TOUS LES TESTS PASSENT\n"); return 0; }
