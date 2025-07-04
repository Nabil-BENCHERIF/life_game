#include <assert.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ecosys.h"

#define NB_PROIES 20
#define NB_PREDATEURS 20



/* Parametres globaux de l'ecosysteme (externes dans le ecosys.h)*/
float p_ch_dir=0.01;
float d_proie=1;
float d_predateur=1;
float p_manger=0.2;
float p_reproduce=0.01;
float energie=50;


int main(void) {
	
  Animal *liste_proie = NULL;
  Animal *liste_predateur = NULL;
  int nb_proies = 0, nb_predateurs = 0;
  int i;
  srand(time(NULL));
  for(i=0;i<NB_PROIES;i++){
	liste_proie=ajouter_en_tete_animal(liste_proie,creer_animal(rand()%SIZE_X,rand()%SIZE_Y,energie));
  }
  for(i=0;i<NB_PREDATEURS;i++){
	liste_predateur=ajouter_en_tete_animal(liste_predateur,creer_animal(rand()%SIZE_X,rand()%SIZE_Y,energie));
  }
  
  nb_proies=compte_animal_rec(liste_proie);
  nb_predateurs=compte_animal_it(liste_predateur);


  afficher_ecosys(liste_proie,liste_predateur);  

  liberer_liste_animaux(liste_proie);
  liberer_liste_animaux(liste_predateur);

  return 0;
}
