#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
void liste_init(Liste* l){ l->tete=NULL; l->taille=0; }
void liste_inserer_tete(Liste* l, int val){ Noeud* n=malloc(sizeof(Noeud)); n->valeur=val; n->suivant=l->tete; l->tete=n; l->taille++; }
void liste_inserer_queue(Liste* l, int val){ Noeud* n=malloc(sizeof(Noeud)); n->valeur=val; n->suivant=NULL; if(l->tete==NULL) l->tete=n; else { Noeud* cur=l->tete; while(cur->suivant!=NULL) cur=cur->suivant; cur->suivant=n; } l->taille++; }
int liste_supprimer(Liste* l, int val){ if(l->tete==NULL) return 0; if(l->tete->valeur==val){ Noeud* tmp=l->tete; l->tete=l->tete->suivant; free(tmp); l->taille--; return 1; } Noeud* cur=l->tete; while(cur->suivant!=NULL && cur->suivant->valeur!=val) cur=cur->suivant; if(cur->suivant==NULL) return 0; Noeud* tmp=cur->suivant; cur->suivant=tmp->suivant; free(tmp); l->taille--; return 1; }
bool liste_contient(Liste* l, int val){ Noeud* cur=l->tete; while(cur){ if(cur->valeur==val) return true; cur=cur->suivant; } return false; }
void liste_afficher(Liste* l){ Noeud* cur=l->tete; printf("[ "); while(cur){ printf("%d ",cur->valeur); cur=cur->suivant; } printf("] (taille=%zu)\n",l->taille); }
void liste_detruire(Liste* l){ Noeud* cur=l->tete; while(cur){ Noeud* tmp=cur; cur=cur->suivant; free(tmp); } l->tete=NULL; l->taille=0; }
void liste_inverser(Liste* l){ Noeud* prev=NULL; Noeud* cur=l->tete; Noeud* next=NULL; while(cur){ next=cur->suivant; cur->suivant=prev; prev=cur; cur=next; } l->tete=prev; }
int liste_milieu(Liste* l){ if(l->tete==NULL) return -1; Noeud* lent=l->tete; Noeud* rapide=l->tete; while(rapide && rapide->suivant){ lent=lent->suivant; rapide=rapide->suivant->suivant; } return lent->valeur; }
