#ifndef LISTE_H
#define LISTE_H
#include <stddef.h>
#include <stdbool.h>
typedef struct Noeud { int valeur; struct Noeud* suivant; } Noeud;
typedef struct { Noeud* tete; size_t taille; } Liste;
void liste_init(Liste* l); void liste_inserer_tete(Liste* l, int val);
void liste_inserer_queue(Liste* l, int val); int liste_supprimer(Liste* l, int val);
bool liste_contient(Liste* l, int val); void liste_afficher(Liste* l);
void liste_detruire(Liste* l); void liste_inverser(Liste* l); int liste_milieu(Liste* l);
#endif
